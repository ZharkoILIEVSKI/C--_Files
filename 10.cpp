#include<string>
#include<iostream>
#include<cstdlib>
#include<ctime>

void igra()
{
    int random_broj = rand() % 251;
    std::cout << "Pogodi go brojot: ";
    int pogoduvanje;
    std::cin >> pogoduvanje;
    std::cout << random_broj << std::endl;
    
    while(true)
    
    {
        if (pogoduvanje == random_broj)
                {
                    std::cout << "Go pogodivte brojot. BRAVO!!!!\n";
                    break;
                }
                else if(pogoduvanje < random_broj)
                {
                    std::cout << "Pomal broj :)\n";
                    break;   
                }
                else 
                {
                    std::cout << "Pogolem broj :)\n"; 
                    break;     
            }
    }
}


int main()
{
    srand(time(NULL));
    int biranje;

    do
    {
        std::cout << "0. Izlez\n" << "1. IGRAJ\n";
        std::cin >> biranje;
    
        switch (biranje)
        {
            case 0:
                std::cout << "Blagodarime i prijatno :)\n";
                return 0;
            
            case 1:
                std::cout << "Pocnuvame :)\n";
                igra();
                break;
        }

    } while (biranje = 1);
    
}