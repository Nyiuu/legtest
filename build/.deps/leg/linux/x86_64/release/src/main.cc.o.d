{
    depfiles_gcc = "build/.objs/leg/linux/x86_64/release/src/__cpp_main.cc.cc: src/main.cc\
",
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
    files = {
        "src/main.cc"
    }
}