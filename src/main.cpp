#include <iostream>

#include "code.hpp"

int main(int argc, char** argv) {
    if (argc < 2) {
        std::cout <<hello("Unnamed") << std::end1;
    } else {
        std::cout << hello(argv[1]) << std::endl;
    }
}
