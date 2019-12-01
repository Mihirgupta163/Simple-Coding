#include<iostream>
using namespace std;

int main()
{
int i, prime, num, n;
cout<<"Enter Number";
cin>>num;

for(n=2; n<num; n++)
{
prime = 1;
for(i=2; i<n; i++)
{
if(n%i == 0)
{
prime = 0;
break;
}
}
if(prime!=0)
{
cout<<n<<" ";
}
}
return 0;
}
