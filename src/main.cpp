#include <iostream>
#include "code.hpp"

int main(int argc, char** argv) {
    // Generowanie trójkąta Pascala dla 5 wierszy
    std::vector<std::vector<int>> pascalTriangle = generatePascalTriangle(5);

    // Wyświetlenie trójkąta Pascala
    for (const auto& row : pascalTriangle) {
        for (const auto& elem : row) {
            std::cout << elem << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}

