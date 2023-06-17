#include <iostream>
#include <cstdlib>
using namespace std;

int main(int argc, char *argv[])
{
    if(argc!=2) 
        {
        cout << "You forgot to type your name.\n";
        return 1;
        }
    cout << "Hello " << argv[1] << '\n';
    std::cin.get();
    return 0;
}