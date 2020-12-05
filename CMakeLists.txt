cmake_minimum_required(VERSION 3.17)
project(vacuumcleaner)

set(CMAKE_CXX_STANDARD 14)

add_executable(vacuumcleaner environment.h environment.cpp room.cpp room.h simulator.h simulator.cpp vaccum_cleaner.cpp vacuumagent.cpp vacuumagent.h)