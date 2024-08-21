#include "crypto_exchanges.hpp"

#include <iostream>

crypto_exchanges::crypto_exchanges(const std::vector<std::shared_ptr<crypto_exchange>>& crypto_exchanges_list) :
    m_crypto_exchanges{crypto_exchanges_list}
{}

void crypto_exchanges::show_crypto_exchanges() {
    if (!m_crypto_exchanges.empty()) {
        for (auto& exchange : m_crypto_exchanges) {
            std::cout << "crypto exchange rate: " << exchange->rate << '\t' << " crypto exchange volatility index: " << exchange->volatility_index << '\n';
        }
    }
}