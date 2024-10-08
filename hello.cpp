#include <iostream>

int distance(int x, int y)
{
    return x - y;
}

//create a function that seach a prime number
bool is_prime(int x)
{
    if (x <= 1)
        return false;    
    for (int i = 2; i < x; i++)
    {
        if (x % i == 0)
            return false;
    }
    return true;
}
//test the is_prime function
int main()
{
    std::cout << "hello\n";
    for (int i = 0; i < 21; i++)
    {
        if (is_prime(i))
            std::cout << i << " ";
    }
    std::cout << std::endl;
}

