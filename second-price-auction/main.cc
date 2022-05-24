// https://codeforces.com/problemset/problem/386/A

#include <iostream>
#include <cstdint>
#include <vector>
#include <algorithm>

struct Bid {
    public:
    int32_t value;
    int32_t index;

    static bool Compare(const Bid &a, const Bid &b) {
        return a.value < b.value;
    }
};

int main() {
    int32_t bidder_count;
    std::cin >> bidder_count;
    std::vector<Bid> bids;
    bids.reserve(bidder_count);
    for (int32_t i = 0; i < bidder_count; ++i) {
        int32_t bid;
        std::cin >> bid;
        bids.push_back({.value=bid, .index=i+1});
    }
    std::sort(bids.begin(), bids.end(), Bid::Compare);
    std::cout << bids[bids.size() - 1].index << " " << bids[bids.size() - 2].value << std::endl;
}
