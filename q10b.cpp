#include<iostream>
using namespace std;
int main()
{int n,swap;
int d[4];
cout<<"enter encrypted data ";
cin>>n;
for(int i=3;i>=0;i--)
{ d[i]=n%10;
  d[i]=(d[i]+3)%10;
    n=n/10;
}
swap=d[0];
d[0]=d[2];
d[2]=swap;
swap=d[1];
d[1]=d[3];
d[3]=swap;
cout<<"decrypted code is ";
for(int i=0;i<4;i++)
{cout<<d[i];
}
return 0;
}
