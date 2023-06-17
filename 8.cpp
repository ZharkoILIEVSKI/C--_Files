#include<iostream>
#include<string>

int main()
{
    std::string recenica = "Jas sum fraer ama malce";
    
    int i;
    for (i = 0; i < recenica.size(); i++)
    {
        std::cout << recenica[i] << std::endl;
        if (recenica[i] == 'f')
        {
            std::cout << "Gotovo" << std::endl;
            break;
        }
    }
}