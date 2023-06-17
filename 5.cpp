#include<iostream>

int main()
{
    std::cout << "Presmetajte faktoriel na brojot: ";
    long long int factorial;
    std::cin >> factorial;
    long long int fact = factorial;

    for (int i = factorial-1; i > 0; i--)
    {
        factorial = factorial*i;
    } 
    std::cout << "Faktorial od brojot " << fact << " e: " << factorial << std::endl;
    return 0;
}