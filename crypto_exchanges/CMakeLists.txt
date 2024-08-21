add_library(crypto_exchanges SHARED crypto_exchanges.cpp)

# this directive withm 'PUBLIC' allows the root of the project .cpp in main() to directly include "crypto_exchanges.hpp"
target_include_directories(crypto_exchanges PUBLIC .)
