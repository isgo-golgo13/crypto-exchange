#pragma once

#include <string>
#include <vector>
#include <memory>

struct crypto_exchange {
    double rate;
    double volatility_index;
};

class crypto_exchanges {
  public:
    crypto_exchanges() = default;
    crypto_exchanges(const std::vector<std::shared_ptr<crypto_exchange>>& crypto_exchanges_list);
    ~crypto_exchanges() = default;

    crypto_exchanges(const crypto_exchanges& rhs) = default;
    crypto_exchanges(crypto_exchanges&& rhs) = default;
    crypto_exchanges& operator=(const crypto_exchanges& rhs) = default;
    crypto_exchanges& operator=(crypto_exchanges&& rhs) = default;

    void show_crypto_exchanges ();

  private:

    std::vector<std::shared_ptr<crypto_exchange>> m_crypto_exchanges;
};