add_requires("eigen")
set_toolchains("clang")
target("leg")
    add_packages("eigen")
    set_languages("c++23")
    set_kind("binary")
    add_files("src/*.cc")
    add_includedirs("include/")
    

