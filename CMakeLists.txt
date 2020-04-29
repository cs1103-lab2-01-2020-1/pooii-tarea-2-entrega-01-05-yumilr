cmake_minimum_required(VERSION 3.15)
project(pooii-tarea-2-entrega-01-05-yumilr)

set(CMAKE_CXX_STANDARD 14)

file(GLOB SOURCES
        "src/*"
        )

add_executable(pooii-tarea-2-entrega-01-05-yumilr ${SOURCES})