cmake_minimum_required(VERSION 3.14.7)
set(CMAKE_CXX_STANDARD 17)

project(calculator
        VERSION 0.0.1
        LANGUAGES CXX
        )

include(cmake/add_simple_library.cmake)
add_subdirectory(bin)
add_subdirectory(include)
add_subdirectory(lib)
add_subdirectory(test)