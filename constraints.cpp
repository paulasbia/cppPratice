#include <iostream>
#include <concepts>
#include <format>

template<typename T>
requires std::integral<T> || std::floating_point<T>
T arg42(const T& arg){
    return arg + 42;
}

int main()
{
    auto n = 7.9;
    std::cout << "The answare is " << arg42(n) << std::endl;
}
