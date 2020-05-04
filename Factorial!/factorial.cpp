#include <iostream>
using namespace std;

int main() 
{
    int Fact = 1;
    int Num;
    std::cin>> Num;
    for(int i=Num; i>=1; i--)
    {
        Fact*=i;
    }
    std::cout << Fact;

}