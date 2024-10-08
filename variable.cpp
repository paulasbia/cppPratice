#include <iostream>
#include <sstream>

using std::cout;

int main() 
{
//    auto i = 42;
    int i {}; //init with 0
    std::ostringstream oss;
    oss << "i is " << i << " \n";
    std::cout << oss.str();
}

