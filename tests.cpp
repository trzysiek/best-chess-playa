#include <iostream>
#include <string>

#include "board.h"

bool test_printing_board() {
    try {
        Board b;
        std::cerr << b << std::endl;
        return true;
    }
    catch (...) {
        return false;
    }
}

void msg(int nr, bool success, std::string m) {
    std::cerr << "Test nr " << nr << ((!success) ? " FAILED! " : " Passed. ") << "(" << m << ")" << std::endl;
}

int main() {
    msg(1, test_printing_board(), "Printing board");
}
