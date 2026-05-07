cmake_minimum_required(VERSION 3.28)
project(aizo1)

set(CMAKE_CXX_STANDARD 17)
add_compile_options(-Wall -Wextra -Werror)

include_directories(include)

add_executable(SortingApp src/main.cpp)

target_link_libraries(SortingApp ${CMAKE_SOURCE_DIR}/lib/libparameters.so)

set_target_properties(SortingApp PROPERTIES BUILD_WITH_INSTALL_RPATH TRUE INSTALL_RPATH "${CMAKE_SOURCE_DIR}/lib")
