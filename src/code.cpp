#include <string>
#include "code.hpp"

using namespace std;

string hello(string_view name) {
    return string("Siemanko,").append(name).append("!!!");
}
