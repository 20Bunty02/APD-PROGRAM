#include<iostream>
using namespace std;
int fui(int n)   //factorial using iteration
{ int res=1; 
 for(int i=n;i>=1;i--)
{res=res*i;
}
return res;
}
int fur(int n)   //factorial using recursion
{ if(n==0||n==1)
   {return 1;}
else
{return(n*fur(n-1));}
}
int main()
{ int n;
cout<<"enter a number ";
cin>>n;
cout<<"factorial using iterative function is "<<fui(n);
cout<<"\nfactorial using recursive function is "<<fur(n);
return 0;
}
