// https://codeforces.com/problemset/problem/1571/A

#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <stdexcept>

int main() {
    int32_t case_count;
    std::cin >> case_count;
    std::vector<char> output;

    for (int32_t i = 0; i < case_count; ++i) {
        char buf;
        char result = '=';
        
        std::string line;
        std::cin >> line;
        std::stringstream ss(line);

        while (ss >> buf) {
            if (buf == '<') {
                if (result == '<' || result == '=') {
                    result = '<';
                    continue;
                } else if (result == '>') {
                    result = '?';
                    break;
                }
            } else if (buf == '=') {
                // No change
                continue;
            } else if (buf == '>') {
                if (result == '<') {
                    result = '?';
                    break;
                } else if (result == '=' || result == '>') {
                    result = '>';
                    continue;
                }
            }

            // Should not be reached unless input is malformed.
            throw std::runtime_error(std::string("unknown combination ") + buf + " " + result);
        }
        output.push_back(result);
    }

    for (char c : output) {
        std::cout << c << std::endl;
    }
}
