cmake_minimum_required(VERSION 3.10)

project(2d_game VERSION 1.0)

add_executable(2d_game Game.cpp World.cpp Player.cpp
                       KeyHandler.cpp )

target_include_directories(2d_game PUBLIC
                          "${PROJECT_BINARY_DIR}"
                          )
