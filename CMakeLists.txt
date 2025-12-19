cmake_minimum_required(VERSION 4.1)

project(Modulo1_Fundamentos)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
file(GLOB_RECURSE SOURCES
        "main.cpp"
        "modulo_01/exercicios/*.cpp"
        "modulo_01/projeto_final/*.cpp")

add_executable(Modulo1_Fundamentos ${SOURCES})