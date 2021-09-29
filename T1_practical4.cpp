#include<iostream>

namespace first
{
int add(int a, int b)
   {
return (a+b);
    }
} 
namespace second
{
float add(float a,float b)
   {
return (a+b);
    }
} 

int main()
{
std::cout<<"ARYAN NIRWAL"<<std::endl<<"STUDENT ID->20011211"<<std::endl<<"SECTION - B"<<std::endl;
std::cout<<first::add(1,2)<<std::endl;
std::cout<<second::add(1.2,6.9)<<std::endl;
return 0;
}

