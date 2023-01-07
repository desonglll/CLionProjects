cmake_minimum_required(VERSION 3.21)
project(wangdao)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(wangdao
        chapter2/work1/main.c
        chapter2/work2/main.c
        chapter2/work3/main.c
        chapter3/work1/main.c
        chapter3/work2/main.c
        chapter4/work1/main.c
        chapter4/work2/main.c
        chapter4/work3/main.c
        chapter5/work1/main.c
        chapter5/work2/main.c
        chapter6/work1/main.c
        chapter6/work2/main.c
        chapter7/work1/main.c
        chapter8/work1/main.c
        chapter8/work2/main.cpp)
