#include<iostream>

class stos
{
    int i;
public:
    int j;
    int prevzemi(int i) {j = i; return j;};
    void prikazi(int j){std::cout << j << std::endl;};
    void pokazi(stos *p) {std::cout << p << std::endl; }
    };

int main()
{
    stos a[4], *p;
    p = &a[0];
    p->prevzemi(1);
    p->prikazi(9);


    std::cout << std::endl;
}