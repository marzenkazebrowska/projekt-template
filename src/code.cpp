#include "code.hpp"

std::string hello (std::string_view name) {
    return std::string("Hello,").append(name).append("!!!");
} 
