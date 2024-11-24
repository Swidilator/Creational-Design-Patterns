cmake_minimum_required(VERSION 3.30)
project(01_Singleton)

set(CMAKE_CXX_STANDARD 23)

add_executable(01_basic_example 01_basic_example/main.cpp
        01_basic_example/Singleton.cpp
        01_basic_example/Singleton.h)
add_executable(02_logger 02_logger/main.cpp
        02_logger/Logger.cpp
        02_logger/Logger.h)
