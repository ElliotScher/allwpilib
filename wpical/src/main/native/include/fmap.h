#pragma once

#ifndef FMAP_H
#define FMAP_H

#include <string>
#include <cmath>

#include <wpi/json.h>
#include <opencv2/opencv.hpp>
#include <tagpose.h>
#include <fieldmap.h>

namespace fmap {
    std::string singleTag(int tag, tag::pose tagpose, bool endTag);
    std::string convertfmap(wpi::json json);
}

#endif //FMAP_H