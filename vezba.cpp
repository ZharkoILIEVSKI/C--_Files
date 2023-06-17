#include<iostream>
#include<stdlib.h>

int main()
{
    std::cout << "Внеси број: ";
    int x;
    std::cin >> x;
    int y = abs(x);
    std::cout << y << "\n";
    return 0;
}