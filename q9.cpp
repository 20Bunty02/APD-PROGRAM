#include<iostream>
#include<cmath>
using namespace std;
int isprime(int n)
{ if(n==1)
   {return 0;}
  for(int i=2;i<=sqrt(n);i++)
{ if(n%i==0)
  {return 1;}  }
return 0;   }
void PrimeFactor(int n)
{ while(n%2==0)
  {cout<<2<<" ";
   n=n/2;}
for(int i=3;i<=sqrt(n);i++)
{ while(n%i==0)
   {cout<<i<<" ";
     n=n/i;}    }
if(n>2)
{cout<<n;
}  }
int main()
{int n;
cout<<"enter the number ";
cin>>n;
if(isprime(n)==0)
{cout<<1<<" ";}
PrimeFactor(n);
return 0;   }
