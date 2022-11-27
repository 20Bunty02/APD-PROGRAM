#include<iostream>
using namespace std;
int main()
{ int n,d[4],swp;
cout<<"enter four digit number ";
cin>>n;
for(int i=3;i>=0;i--)
{d[i]=n%10;
  d[i]=(d[i]+7)%10;
  n=n/10;
}
swp=d[0];
d[0]=d[2];
d[2]=swp;
swp=d[1];
d[1]=d[3];
d[3]=swp;
cout<<"encripted data is ";
for(int i=0;i<4;i++)
{cout<<d[i];
}
return 0;
}
