cmake_minimum_required(VERSION 3.28)
project(course C)

set(CMAKE_C_STANDARD 11)

add_executable(course main.c

)
add_executable(new_target cs.c)
add_executable(class new.c)
