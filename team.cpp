#include <iostream>
int a,b,c,k;
int main()
{
std::cin>>a;
while(std::cin>>a>>b>>c)
{
if((a+b+c)> 1)k++;
};
std::cout<<k;
}