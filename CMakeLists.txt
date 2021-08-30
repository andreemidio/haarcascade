cmake_minimum_required(VERSION 3.20)
project(detector)

find_package(OpenCV REQUIRED)

set(CMAKE_CXX_STANDARD 11)

set(SOURCES main.cpp)

#set(HEADERS)

file(COPY haarcascade_frontalface_alt.xml DESTINATION ${CMAKE_BINARY_DIR})
add_executable(${PROJECT_NAME} ${SOURCES})

target_link_libraries(${PROJECT_NAME} ${OpenCV_LIBS})
