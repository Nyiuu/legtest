{
    files = {
        "leg.cc"
    },
    values = {
        "/usr/bin/clang",
        {
            "-Qunused-arguments",
            "-m64",
            "-std=c++23",
            "-isystem",
            "/usr/include/eigen3"
        }
    },
    depfiles_gcc = "build/.objs/leg/linux/x86_64/release/__cpp_leg.cc.cc: leg.cc\
"
}