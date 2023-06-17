#include<iostream>
#include<limits>
#include<string>

void printaj_niza(int niza_1[])
{
    for (int i = 0; i < 10; i++)
    {
        std::cout << niza_1[i] << "\t";
    }
    std::cout << std::endl;
}

int main()
{
    const int size = 100; 
    int niza[size];
    int i;
        for (int i = 0; i < 10; i++)
        {
            if(std::cin >> niza[i])
            {

            }
            else
            {
                break;
            }
        }
    printaj_niza(niza);
    
    std::cin.clear();
    std::cin.ignore(10000, '\n');

    std::string test;q
    std::cin >> test;
    std::cout << test;
    std::cout << " " << std::endl;
}