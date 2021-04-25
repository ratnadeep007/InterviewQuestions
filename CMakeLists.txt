cmake_minimum_required(VERSION 3.19)
project(Interview)

set(CMAKE_CXX_STANDARD 14)

file(GLOB dynamicProblemsSrc "dynamicProblems/*.h" "dymaicProblems/*.cpp")
file(GLOB arrayProblemsSrc "arrayProblems/*.h" "arrayProblems/*.cpp")
file(GLOB utilsSrc "utils/*.h" "utils/*.cpp")

add_executable(Interview main.cpp
        ${dynamicProblemsSrc}
        ${arrayProblemsSrc}
        ${utilsSrc})