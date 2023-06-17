#include<iostream>
#include<string>

int main()
{
    int godini;
    std::cout << "Kolku godini imash? : ";
    std::cin >> godini;
   
    switch (godini)
        {
            case 15:
            std::cout << "Mashaala\n ";
            break;
            case 16:
            std::cout << "Braoos, Braosss\n ";
            break;
            default:
            std::cout << "Ajdeeee bravoos ";
            break;
        }
    return 0;
}