# Copyright 2018 Petr Kmoch
# Licensed under the Boost Software License Version 1.0
# See accompanying file LICENSE or http://www.boost.org/LICENSE_1_0.txt

# ------------------------------------------------------------------------
# Common library
# ------------------------------------------------------------------------

add_library(
	Common
	INTERFACE
)

target_include_directories(Common
	INTERFACE Common/include
)


add_library(
	Common-dev
	STATIC
	Common/include/PoGoKit/Common/Types.hh
	Common/include/PoGoKit/Common/Types.hpp
	Common/include/PoGoKit/Common/Types.hxx
)

target_link_libraries(Common-dev
	PRIVATE Common
)

set_property(TARGET Common-dev PROPERTY LINKER_LANGUAGE CXX)


# ------------------------------------------------------------------------
# RawData library
# ------------------------------------------------------------------------

add_library(
	RawData
	STATIC
	RawData/include/PoGoKit/RawData/Attacks.hh
	RawData/include/PoGoKit/RawData/Attacks.hpp
	RawData/include/PoGoKit/RawData/Attacks.hxx
	RawData/src/Attacks.cpp
)

target_include_directories(RawData
	PUBLIC RawData/include
)

target_link_libraries(RawData
	PUBLIC Common
)


# ------------------------------------------------------------------------
# Movesets executable
# ------------------------------------------------------------------------

add_executable(
	Movesets
	src/Attacks.hh
	src/Attacks.hpp
	src/Attacks.hxx
	src/main.cpp
)

target_link_libraries(Movesets
	PUBLIC Common RawData
)
