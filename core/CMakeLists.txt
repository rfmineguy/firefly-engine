cmake_minimum_required(VERSION 3.20)

message("========================")
message("         CORE")
message("========================")

project(firefly-engine-core)

set(CMAKE_CXX_STANDARD_REQUIRED True)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++17 -pthread")

set (MAIN src/main.cpp)
set (CORE_SOURCES src/file_util.cpp) 

add_executable(firefly-engine-core-exec ${MAIN} ${CORE_SOURCES})
add_library(firefly-engine-core-lib ${CORE_SOURCES})

target_include_directories(firefly-engine-core-exec PUBLIC ../vendor/glfw/include/ ../vendor/glad/include/ ../core/include/)
target_include_directories(firefly-engine-core-lib PUBLIC ../vendor/glfw/include/ ../vendor/glad/include/ ../core/include/)
