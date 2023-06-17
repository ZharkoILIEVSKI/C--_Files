#include<iostream>
#include<vector>

int main()
{
    std::vector<int> gjubrenca = {2,3,4};
    gjubrenca.push_back(12);
    std::cout << "Biraj element od vectorot?:  ";
    int x;
    std::cin >> x;
    std::cout << gjubrenca[x] << std::endl; 
    std::cout << gjubrenca.size() << std::endl; 
    gjubrenca.pop_back();
    std::cout << gjubrenca.size() << std::endl; 
}