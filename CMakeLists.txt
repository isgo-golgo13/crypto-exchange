cmake_minimum_required(VERSION 3.20.0)
project(crypto_exchange_app CXX)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(crypto_exchange_app main.cpp)

# add submodule dependency directories (cars)
add_subdirectory(crypto_exchanges)
target_link_libraries(crypto_exchange_app PRIVATE crypto_exchanges)
