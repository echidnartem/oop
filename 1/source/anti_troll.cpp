#include "../include/anti_troll.h"

std::string anti_troll(std::string input_string) {
    std::string output_string;
    for (char c : input_string) {
        char temp_c = c;
        c = std::tolower(c);
        if (c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u' && c != 'y') {
            output_string += temp_c;
        }
    }
    return output_string;
}
