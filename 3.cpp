#include <iostream>

int main()
{
    int vozrast;
    std::cout << "Kolku godini imas? : ";
    std::cin >> vozrast;

    if (vozrast < 20 )
    {
         if (vozrast < 11)
        {
            std::cout << "Ti si seuste detulence\n";
        } 
        else 
        {
            std::cout << "Ti si teenager!!!\n";
        }   
    }
  
    else
    {
        std::cout << "Ti si vekje covek\n";
    }
    return 0;
}