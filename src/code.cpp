#include "code.hpp"

std::string hello(std::string_view name) {
    return std::string("Siemanko,").append(name).append("!!!");
}
