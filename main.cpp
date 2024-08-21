#include <iostream>
#include <memory>

#include "crypto_exchanges.hpp"

int main() {

    crypto_exchanges crypto_exchanges_range {std::vector<std::shared_ptr<crypto_exchange>> {
        std::make_shared<crypto_exchange>(crypto_exchange{ 62.50,  70.00 }),
        std::make_shared<crypto_exchange>(crypto_exchange{ 40.60, 66.60})}
    };

    crypto_exchanges_range.show_crypto_exchanges();

    return EXIT_SUCCESS;
}