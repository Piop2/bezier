cmake_minimum_required(VERSION 3.15)
project(bezier CXX)




add_library(bezier
    src/bezier.cpp
    src/curve.cpp
)
target_include_directories(bezier PUBLIC include)



set_target_properties(bezier PROPERTIES PUBLIC_HEADER "include/bezier.h")
install(TARGETS bezier)
