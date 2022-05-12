#include <cstdint>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>

int main() {
    int32_t case_count;
    std::cin >> case_count;
    std::vector<int64_t> output;
    output.reserve(case_count);

    for (int32_t i = 0; i < case_count; ++i) {
        int32_t customer_count;
        std::cin >> customer_count;

        std::string line;
        std::cin >> line;
        std::stringstream ss(line);

        std::vector<int64_t> customer_coins;
        customer_coins.reserve(customer_count);
        for (int32_t j = 0; j < customer_count; ++j) {
            int64_t coins;
            ss >> coins;
            customer_coins.push_back(coins);
        }

        int64_t max_profit = 0;
        for (int64_t hamburger_price : customer_coins) {
            int32_t paying_customers = 0;
            for (int64_t coins : customer_coins) {
                if (coins >= hamburger_price) {
                    ++paying_customers;
                }
            }

            int64_t profit = paying_customers * hamburger_price;
            if (profit > max_profit) {
                max_profit = profit;
            }
        }

        output.push_back(max_profit);
    }

    for (int64_t value : output) {
        std::cout << value << std::endl;
    }
}
