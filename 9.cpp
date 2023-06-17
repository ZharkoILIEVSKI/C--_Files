#include<iostream>
#include<string>

int main()
{
    int odgovor = 12;
    std::cout << "Pogodete go brojot: ";
    int pogoduvanje;
    std::cin >> pogoduvanje;

    odgovor == pogoduvanje ? std::cout << "OK\n" : std::cout << "NO\n";

}