# Copyright 2018 Petr Kmoch
# Licensed under the Boost Software License Version 1.0
# See accompanying file LICENSE or http://www.boost.org/LICENSE_1_0.txt

cmake_minimum_required(VERSION 3.7)
project(PoGoKit)

set(CMAKE_CXX_EXTENSIONS OFF)
# ToDo: convert to CMAKE_CXX_STANDARD once sufficiently modern CMake can be supported
if(MSVC)
	set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} /std:c++17")
endif()

set_property(GLOBAL PROPERTY USE_FOLDERS ON)

add_subdirectory(code)
