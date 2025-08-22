#include <iostream>
using namespace  std ;
int main () {
    char X;
    std::cin >> X;
    if (X >= '0' && X <= '9') {
        std::cout << "IS DIGIT" << std::endl;
    } else if (X >= 'A' && X <= 'Z') {
        std::cout << "ALPHA" << std::endl;
        std::cout << "IS CAPITAL" << std::endl;
    } else if (X >= 'a' && X <= 'z') {
        std::cout << "ALPHA" << std::endl;
        std::cout << "IS SMALL" << std::endl;
    }
}