cmake_minimum_required(VERSION 3.20)
project(doegame)
add_executable(doegame main.c)
target_link_libraries(doegame raylib)