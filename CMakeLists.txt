cmake_minimum_required(VERSION 3.27)
project(Tic_Tac_Toe)

set(CMAKE_CXX_STANDARD 20)

add_executable(Tic_Tac_Toe main.cpp
        computerPlayer.h
        computerPlayer.cpp
        Display.h
        Display.cpp)
