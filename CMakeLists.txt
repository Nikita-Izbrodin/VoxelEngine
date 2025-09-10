cmake_minimum_required(VERSION 4.0.2)

project(VoxelEngine)

add_executable(${PROJECT_NAME} 
    src/main.cpp
    src/glad.c
    src/stb.cpp
)

add_subdirectory(lib/glfw)

target_include_directories(${PROJECT_NAME} 
    PUBLIC lib/glfw/include
    PUBLIC lib
)

target_link_directories(${PROJECT_NAME}
    PRIVATE lib/glfw/src
)

target_link_libraries(${PROJECT_NAME}
    glfw
)
