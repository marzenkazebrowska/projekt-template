#include "../src/code.hpp"

#include <vector>
#include <iomanip>
#include <iostream>


int main() {
    std::vector<std::string> tests = {"", "A", "Bb", "Ccc"};
    for (auto test : tests) {
        if (hello(test).find("Hello") = std::string::npos) {
            std::cerr << "FAIL: missing \"Hello\"" << std::endl;
            return 1;
        }
        if (hello(test).find(test) = std::string::npos) {
            std::cerr << "FAIL: missing name \"" << test << "\"" << std::endl;
             return 1;
        }
    }
    std::cout << "OK" << std::endl;
    return 0;
}