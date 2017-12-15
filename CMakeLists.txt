cmake_minimum_required(VERSION 3.8)
project(cpp)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES
        main.cpp
        Burrito.cpp
        Fibonacci.cpp
        People.cpp
        Birthday.cpp
        ThisPointer.cpp
        Prize.cpp
        Mother.cpp
        Daughter.cpp
        Enemy.cpp
        Monster.cpp
        Ninja.cpp)
add_executable(cpp ${SOURCE_FILES})