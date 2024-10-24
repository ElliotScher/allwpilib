#!/usr/bin/env python3

import os
import shutil

from upstream_utils import Lib, walk_cwd_and_copy_if


def copy_upstream_src(wpilib_root):
    wpical = os.path.join(wpilib_root, "wpical")

    # Delete old install
    for d in [
        "src/main/native/thirdparty/libdogleg/src",
        "src/main/native/thirdparty/libdogleg/include",
    ]:
        shutil.rmtree(os.path.join(wpical, d), ignore_errors=True)

    walk_cwd_and_copy_if(
        lambda dp, f: f.endswith("dogleg.h"),
        os.path.join(wpical, "src/main/native/thirdparty/libdogleg/include"),
    )
    walk_cwd_and_copy_if(
        lambda dp, f: f.endswith("dogleg.c"),
        os.path.join(wpical, "src/main/native/thirdparty/libdogleg/src"),
    )


def main():
    name = "libdogleg"
    url = "https://github.com/dkogan/libdogleg"
    tag = "c971ea43088d286a3683c1039b9a85f761f7df15"

    libdogleg = Lib(name, url, tag, copy_upstream_src)
    libdogleg.main()


if __name__ == "__main__":
    main()
