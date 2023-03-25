#include "../src/code.hpp"

#include <vector>
#include <iomanip>
#include <iostream>

using namespace std;

int main() {
    vector<string> tests = {"", "A", "Bb", "Ccc"};
    for (auto test : tests) {
        if (hello(test).find("Siemanko") == string::npos) {
            cerr << "BŁĄD: brakujące \"Siemanko\"" << endl;
            return 1;
        }
        if (hello(test).find(test) == string::npos) {
             cerr << "BŁĄD: brakujące \"" << test << "\"" << endl;
             return 1;
        }
    }
    cout << "OK" << endl;
    return 0;
}
