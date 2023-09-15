#include <iostream>
#include <string>

void reverseAndDisplay(const std::string& str, int index) {
    if (index >= 0) {
        std::cout << str[index];
        reverseAndDisplay(str, index - 1);
    }
}

int main() {
    std::string full_name = "Anday, Allen Christian C.";
    reverseAndDisplay(full_name, full_name.length() - 1);
    std::cout << std::endl;

    return 0;
}