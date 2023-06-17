#include <iostream>

int main()

{
    std::cout << "Vnesi factoriel od brojot: ";
    int fact;
    std::cin >> fact;
    int factorial = fact;
     
     int i = factorial -1;
     while(i>1)
     {
        factorial = factorial*i;
        i--;
     }
    std::cout << "Faktoriel od brojot " << fact << " e: " << factorial << std::endl;
    return 0;
}