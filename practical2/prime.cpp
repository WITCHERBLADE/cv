#include<iostream>
#include<math.h>
using namespace std;

int main()
{

int num , count=0;

cout<<"enter the number\n";
cin>>num;

for(int i=1;i<num;i++)
{
if(num%i==0)
{
count+=1;
}
}

if(count>2)
{
cout<<num<<"  is not a prime number"<<"\n";

}
else
{
cout<<num<<"  is a prime number"<<"\n";
}



return 0;
}


