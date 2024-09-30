cmake_minimum_required(VERSION 3.15)
project(bezier CXX)




add_library(bezier
    src/bezier.cpp
    src/curve.cpp
    src/point.cpp
)
target_include_directories(bezier PUBLIC include)


file(GLOB_RECURSE PUBLIC_HEADERS "include/bezier/*.hpp")
set_target_properties(bezier PROPERTIES PUBLIC_HEADER "${PUBLIC_HEADERS}")

install(
    TARGETS bezier
    PUBLIC_HEADER DESTINATION include/bezier
)
