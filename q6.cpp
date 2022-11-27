#include<iostream>
using namespace std;
int gcd(int n,int m)
{ int res=1;
 if(n>=m)
  {for(int i=2;i<=m;i++)
     {if((n%i==0)&&(m%i==0))
        {res=i;
}
}}
else
{for(int i=2;i<=n;i++)
{if((n%i==0)&&(m%i==0))
{res=i;
}
}
}
return res;
}
int main()
{ int n,m,res=1;
cout<<"enter two number ";
cin>>n>>m;
res=gcd(n,m);
cout<<"\ngcd of two given numbers is "<<res;
return 0;
}
