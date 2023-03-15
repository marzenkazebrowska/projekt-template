
#include "code.hpp"
#include <iostream>
#include <vector>

std::vector<std::vector<int>> generatePascalTriangle(int numRows);

int main() {
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

std::vector<std::vector<int>> generatePascalTriangle(int numRows) {
    std::vector<std::vector<int>> triangle(numRows);

    for (int i = 0; i < numRows; i++) {
        triangle[i].resize(i + 1);
        triangle[i][0] = triangle[i][i] = 1;

        for (int j = 1; j < i; j++) {
            triangle[i][j] = triangle[i - 1][j - 1] + triangle[i - 1][j];
        }
    }

    return triangle;
}

