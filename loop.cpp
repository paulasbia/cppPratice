#include <iostream>

using std::cout;

int main()
{
    char string[] {"string"};
    int i {0};

    //do while loop
    // do {
    //     cout << string[i] << std::endl;
    //     ++i;
    // } while (string[i]);
    
    //for loop
    // for (auto *p = string; *p; ++p)
    // {
    //     cout << *p << std::endl;
    // }

    //range based for loop
    for (const auto &c : string) {
        if (c == 0)
            break;
        cout << c << std::endl;
    }
}