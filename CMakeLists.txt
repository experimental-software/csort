cmake_minimum_required(VERSION 3.10)

project(csort)

include_directories("src/")

add_executable(csort
    src/csort.c
    src/Sorting.c
    src/Utils.c
    src/Arguments.h
)