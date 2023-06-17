#include<iostream>

void printaj_niza(int niza[])
{
     for (int i = 0; i < 6; i++)
    {
        std::cout << niza[i] << "\t";
        std::cout << " " << std::endl;
    }
}

int main()
{
    int pogodoci[] = { 1, 2, 5, 7, 10, 15};
    printaj_niza(pogodoci);
    return 0;
}