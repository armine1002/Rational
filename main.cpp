#include <iostream>
#include "rational.hpp"

int main() {
    Rational r;
    std::cout << "Type a rational in the form num/den, and I'll say it back at you: ";
    std::cin  >> r;
    // std::cout << "This is your rational: " << r << std::endl;
    // I can do any +,-,/, and * with any Rational Numbers
    // I can also compare <=, >=, and == with any Rational Numbers.
    return 0;
}
