cmake_minimum_required(VERSION 4.1)
project(OpenGLProject)

set(CMAKE_CXX_STANDARD 20)

find_package(OpenGL REQUIRED)
find_package(GLUT REQUIRED)

add_executable(OpenGLProject
        GL01Hello.cpp)

target_link_libraries(OpenGLProject
        OpenGL::GL
        GLUT::GLUT
)

