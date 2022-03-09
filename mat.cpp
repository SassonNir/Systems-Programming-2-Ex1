#include "mat.hpp"

namespace ariel {
/*
Input: col=9, row=7, a='@', b='-'
Output:
@@@@@@@@@
@-------@
@-@@@@@-@
@-@---@-@
@-@@@@@-@
@-------@
@@@@@@@@@

Input: col=13, row=5, a='@', b='-'
Output:
@@@@@@@@@@@@@
@-----------@
@-@@@@@@@@@-@
@-----------@
@@@@@@@@@@@@@
*/
string mat(int col, int row, char a, char b) {
    string result;
    if (col <= 0 || row <= 0) {
        throw std::invalid_argument("Mat size is always positive");
    }
    if (col % 2 == 0 || row % 2 == 0) {
        throw std::invalid_argument("Mat size is always odd");
    }
    return "";
}
}
