#include <iostream>
#include <unistd.h>

int main()
{
    int x = 30;
    int y = 12;
    x = y;
    printf("the value of x is %d\n", x);
    return 0;
}