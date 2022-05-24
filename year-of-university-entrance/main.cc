// https://codeforces.com/problemset/problem/769/A
// I don't really understand what this problem is asking, so my solution may
// be wrong.

#include <cstdint>
#include <iostream>

int main() {
    int32_t group_count;
    std::cin >> group_count;

    // We need to average the years, so we add up all the year values.
    int32_t group_year_sum = 0;
    for (int32_t i = 0; i < group_count; ++i) {
        int32_t tmp;
        std::cin >> tmp;
        group_year_sum += tmp;
    }

    std::cout << (group_year_sum / group_count) << std::endl;
}
