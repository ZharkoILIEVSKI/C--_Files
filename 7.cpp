#include<iostream>
#include<string>
int main()
{
    
    std::string password = "Zarko1234";
    std::string pogoduvanje;
    
    
    do
    {
        std::cout << "Enter password: ";
        std::cin >> pogoduvanje;
    } while (pogoduvanje != password);
    
    
    return 0;
}