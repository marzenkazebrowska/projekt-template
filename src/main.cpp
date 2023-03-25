#include <iostream>
#include "code.hpp"

using namespace std;

int main(int argc, char** argv) {
  if (argc < 2) {
    cout << hello("Unnamed") << endl;
  } else {
    cout << hello(argv[1]) << endl;
  }
}

