#include<string>
#include<iostream>
#include<cstdlib>
#include<ctime>

void printaj_pogodoci(int pog_niza[], int count)
{
    for (int i = 0; i < count; i++)
    {
        std::cout << pog_niza[i] << "\t";
    }
}

void igra()
{
    int random_broj = rand() % 251;
    int pogoduvanje;
    std::cout << random_broj << std::endl;
    int broj_na_pogoduvanja = 0;
    int pogoduvanje_niza[250];
    
        
    while(pogoduvanje != 0)
    
    {
       std::cout << "Pogodi go brojot: ";
       std::cin >> pogoduvanje;
       pogoduvanje_niza[broj_na_pogoduvanja++] = pogoduvanje;
       
       
        if (pogoduvanje == random_broj)
                {
                    std::cout << "Go pogodivte brojot. BRAVO!!!!\n";
                    printaj_pogodoci(pogoduvanje_niza,broj_na_pogoduvanja);
                    std::cout << "\n";
                    break;
                }
                else if(pogoduvanje < random_broj)
                {
                    std::cout << "Pomal broj :)\n";                      
                }
                else
                {
                    std::cout << "Pogolem broj :)\n";                 
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