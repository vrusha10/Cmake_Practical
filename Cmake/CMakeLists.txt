cmake_minimum_required(VERSION 3.5)

project(Cmake LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_subdirectory(Try)
add_executable(Cmake main.cpp)

target_link_directories(Cmake PUBLIC Try)
target_link_libraries(Cmake PUBLIC Try)

install(TARGETS Cmake
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
