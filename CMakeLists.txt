cmake_minimum_required(VERSION 3.28)
project(aizo1)

# Ustawiamy standard C++17 i flagi z instrukcji
set(CMAKE_CXX_STANDARD 17)
add_compile_options(-Wall -Wextra -Werror)

# Mówimy, gdzie są nagłówki (Parameters.h)
include_directories(include)

# Tworzymy program z pliku main.cpp
add_executable(SortingApp src/main.cpp)

# Ręczne linkowanie biblioteki .so
# Podajemy bezpośrednią ścieżkę do pliku binarnego
target_link_libraries(SortingApp ${CMAKE_SOURCE_DIR}/lib/libparameters.so)

# To jest potrzebne tylko po to, żebyś mógł uruchomić program prosto z CLion
set_target_properties(SortingApp PROPERTIES BUILD_WITH_INSTALL_RPATH TRUE INSTALL_RPATH "${CMAKE_SOURCE_DIR}/lib")
