#include "../src/code.hpp"

#include <iostream>
#include <vector>
#include <cassert>

// Funkcja generująca trójkąt Pascala do określonego poziomu
std::vector<std::vector<int>> generatePascalTriangle(int numRows) {
    std::vector<std::vector<int>> triangle(numRows);
    

// Funkcja testująca poprawność działania funkcji generatePascalTriangle
void testPascalTriangle() {
    // Test dla poziomu 0
    std::vector<std::vector<int>> expected0 = {};
    std::vector<std::vector<int>> result0 = generatePascalTriangle(0);
    assert(result0 == expected0);
    
    // Test dla poziomu 1
    std::vector<std::vector<int>> expected1 = {{1}};
    std::vector<std::vector<int>> result1 = generatePascalTriangle(1);
    assert(result1 == expected1);
    
    // Test dla poziomu 2
    std::vector<std::vector<int>> expected2 = {{1}, {1, 1}};
    std::vector<std::vector<int>> result2 = generatePascalTriangle(2);
    assert(result2 == expected2);
    
    // Test dla poziomu 5
    std::vector<std::vector<int>> expected5 = {{1}, {1, 1}, {1, 2, 1}, {1, 3, 3, 1}, {1, 4, 6, 4, 1}};
    std::vector<std::vector<int>> result5 = generatePascalTriangle(5);
    assert(result5 == expected5);
    
    std::cout << "Wszystkie testy zostały wykonane poprawnie!" << std::endl;
}

int main() {
    testPascalTriangle();
    return 0;
}

