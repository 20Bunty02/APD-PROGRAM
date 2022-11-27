#include<iostream>
#include<cmath>
using namespace std;
int fact(int n)
{ int ans=1; 
for(int i=n;i>0;i--)
{ ans=ans*i;
}
return ans;
}
int main()
{ float x,n;
double res=0;
cout<<"program to calculate sin(x) upto n terms ";
cout<<"\nenter value of x ";
cin>>x;
x=x*(3.142/180);
cout<<"\nenter value of n ";
cin>>n;
for(int i=1,j=1;j<=n;i+=2,j++)
{ res=res+(pow(-1,j+1)*(pow(x,i))/fact(i)); 
}
cout<<" the result is "<<res;
return 0;
}
