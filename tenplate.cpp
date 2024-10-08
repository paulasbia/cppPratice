#include <format>
#include <iostream>

//c++ -std=c++20 -o tenplate tenplate.cpp
using std::format;
using std::cout;

// template<typename T>
// T maxof(T a, T b) {
//     return a > b ? a : b;
// }

// int main() {
//     int x {47};
//     int y {73};
//     auto z = maxof<int>(x, y);
//     cout << format("max is {}\n", z);
//     return 0;
// }

int main() {
    std::string s1 = "String 1";
    std::string s2 = "String 2";
    std::cout << s1; s2 << std::endl;
    std::cout << std::endl;
    return 0;}