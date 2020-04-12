#include<iostream>
enum season{spring, summer, autumn, winter};
int main()
{
    season climate;
    climate = summer;
    std::cin>>climate;
    std::cout<<"Climate = "<<climate;
}
