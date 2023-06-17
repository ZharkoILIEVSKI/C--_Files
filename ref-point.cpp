#include<iostream>

int main()
{
    int x = 5;
    std::cout << x << "\n";
    std::cout << &x << "\n";
    int *b = &x;
    std::cout << b << "\n";
    std::cout << &b << "\n";
    std::cout << *b << "\n";
    *b = 10;
    std::cout << *b << "\n";
    std::cout << x << "\n";
    return 0;
}