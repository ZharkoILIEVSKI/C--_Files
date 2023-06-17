#include<iostream>
#include<string>

using std::cout;
using std::endl;
using std::cin;

int main()
{
    std::string pozdrav = "Kade ima picinja?";
    cout << pozdrav.find("picinja") << endl;
    pozdrav.replace(pozdrav.find("picinja"),7,"******");
    cout << pozdrav << endl;
    return 0;
}