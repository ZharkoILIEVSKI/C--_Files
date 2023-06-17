#include<iostream>
#include<cmath>

void mnozenje(double prv_mnozitel, double vtor_mnozitel)
{
    double mnozenje_prvo = prv_mnozitel * vtor_mnozitel;
    std::cout << "Mnozenjeto iznesuva: "<< prv_mnozitel << " * " << vtor_mnozitel << " = " << mnozenje_prvo << std::endl;    
}


int main()
{
    int x;
    int y;
    std::cout << "Prv mnozitel. x = ";
    std::cin >> x;
    std::cout << "Vtor mnozitel. y = ";
    std::cin >> y;
    mnozenje(x,y);
    mnozenje(4,15);
    return 0;
}