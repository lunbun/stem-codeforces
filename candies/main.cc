// https://codeforces.com/problemset/problem/306/A

#include <iostream>

int main() {
    int32_t candy_count, friend_count;
    std::cin >> candy_count >> friend_count;

    // Each friend either gets x candies or x+1 candies. min_candies is x, the lower number of candies.
    int32_t min_candies = candy_count / friend_count;
    // max_candy_count is the number of friends that get x+1 candies.
    int32_t max_candy_count = candy_count % friend_count;

    for (int32_t i = 0; i < friend_count; ++i) {
        if (friend_count - i <= max_candy_count) {
            std::cout << (min_candies + 1);
        } else {
            std::cout << min_candies;
        }
        std::cout << " ";
    }
    std::cout << std::endl;
}
