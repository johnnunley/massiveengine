# This file is part of massiveengine.
# 
# massiveengine is free software: you can redistribute it and/or modify
# it under the terms of the GNU General Public License as published by
# the Free Software Foundation, either version 3 of the License, or
# (at your option) any later version.
# 
# massiveengine is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# GNU General Public License for more details.
# 
# You should have received a copy of the GNU General Public License
# along with massiveengine.  If not, see <http://www.gnu.org/licenses/>.

# required stuff
cmake_minimum_required(VERSION 2.8.9)
project(massiveengine)
set(CMAKE_BUILD_TYPE Release)

set(COMPILE_FLAGS "-Iinclude -pthread -Wsizeof-array-argument")
set(LINK_FLAGS " ")

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} ${COMPILE_FLAGS}")
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} ${COMPILE_FLAGS}")
set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} ${LINK_FLAGS}")

# get sources
file(GLOB SOURCES "src/*")

set(VERSION_MAJOR "ALPHA")
set(VERSION_MINOR "1")

# do configuration
configure_file (
  "include/massiveengine_config.h.in"
  "include/massiveengine_config.h"
  )

# compile sources
add_executable(massiveengine ${SOURCES})
set_property(TARGET massiveengine PROPERTY CXX_STANDARD 11)
set_property(TARGET massiveengine PROPERTY CXX_STANDARD_REQUIRED ON)
