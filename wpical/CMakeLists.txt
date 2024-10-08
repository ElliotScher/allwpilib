project(wpical)

include(CompileWarnings)
include(GenResources)
include(LinkMacOSGUI)
include(AddTest)

configure_file(src/main/generate/WPILibVersion.cpp.in WPILibVersion.cpp)
generate_resources(src/main/native/resources generated/main/cpp WPIcal wpical wpical_resources_src)

file(GLOB wpical_src src/main/native/cpp/*.cpp ${CMAKE_CURRENT_BINARY_DIR}/WPILibVersion.cpp)

if(WIN32)
    set(wpical_rc src/main/native/win/wpical.rc)
elseif(APPLE)
    set(MACOSX_BUNDLE_ICON_FILE wpical.icns)
    set(APP_ICON_MACOSX src/main/native/mac/wpical.icns)
    set_source_files_properties(${APP_ICON_MACOSX} PROPERTIES MACOSX_PACKAGE_LOCATION "Resources")
endif()

add_executable(wpical ${wpical_src} ${wpical_resources_src} ${wpical_rc} ${APP_ICON_MACOSX})
wpilib_link_macos_gui(wpical)
wpilib_target_warnings(wpical)
target_include_directories(wpical PRIVATE src/main/native/include)

find_package(OpenCV REQUIRED)
target_link_libraries(
    wpical
    wpimath
    libglassnt
    libglass
    apriltaglib
    ${OpenCV_LIBS}
)

if(WIN32)
    set_target_properties(wpical PROPERTIES WIN32_EXECUTABLE YES)
elseif(APPLE)
    set_target_properties(wpical PROPERTIES MACOSX_BUNDLE YES OUTPUT_NAME "wpical")
endif()

if(WITH_TESTS)
    wpilib_add_test(wpical src/test/native/cpp)
    wpilib_link_macos_gui(wpical_test)
    target_sources(wpical_test PRIVATE ${sysid_src})
    target_compile_definitions(wpical_test PRIVATE RUNNING_WPICAL_TEST)
    if(MSVC)
        target_compile_options(wpical_test PRIVATE /utf-8)
    endif()
    target_include_directories(wpical_test PRIVATE src/main/native/cpp src/main/native/include)
    target_link_libraries(wpical_test wpimath libglassnt libglass googletest)
endif()
