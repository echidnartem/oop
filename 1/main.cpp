#include <iostream>
#include "include/anti_troll.h"

int main() {
    std::string input_string;
    std::cout << "Enter string: ";
    std::getline(std::cin, input_string);
    std::cout << "\nResult of the function: " << anti_troll(input_string);

    return 0;
}