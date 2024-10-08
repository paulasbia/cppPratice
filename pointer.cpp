#include <iostream>

using std::cout;

int main(){
    int x {7};
    int y {42};
    int *p = &x;

    cout << "x is " << x << " \n";
    cout << "y is " << y << " \n";
    cout << "p is " << *p << " \n";
}