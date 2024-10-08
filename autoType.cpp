#include <iostream>
#include <typeinfo>
#include <vector>

using std::cout;

int main() {
    std::string s = "hello";
    auto x = s;

    cout << "x is " << x << " \n"; 
    cout << typeid(x).name() << std::endl;

    std::vector<int> vi {1, 2, 3, 4, 5};
    //std::vector<int>::iterator it = vi.begin();
    for(auto it = vi.begin(); it != vi.end(); ++it) {
        cout << *it << std::endl;
        cout << typeid(it).name() << std::endl;
    }
}