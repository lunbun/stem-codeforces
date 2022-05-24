// https://codeforces.com/problemset/problem/421/A

#include <cstdint>
#include <vector>
#include <iostream>
#include <algorithm>

void GetLikedApples(int32_t hamster_id, int32_t apple_count, std::vector<int32_t> &output) {
    for (int32_t i = 0; i < apple_count; ++i) {
        int32_t apple_index;
        std::cin >> apple_index;
        output[apple_index - 1] = hamster_id;
    }
}

int main() {
    int32_t apple_count, arthur_count, alexander_count;
    std::cin >> apple_count >> arthur_count >> alexander_count;

    std::vector<int32_t> output(apple_count);
    // By default, apples go to second hamster
    std::fill(output.begin(), output.end(), 2);

    // Apples go to first hamster if he likes them
    GetLikedApples(1, arthur_count, output);
    // No need to check for alexander's apples since they will go to him by default if arthur does not take them.
    // Still read them from stdin though.
    std::string ignored;
    std::cin >> ignored;

    for (int32_t output_apple : output) {
        std::cout << output_apple << " ";
    }
    std::cout << std::endl;
}
