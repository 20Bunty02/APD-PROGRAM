#include<iostream>
using namespace std;
float squareroot(int n)
{float root=1;
int i=0;
while(1)
{ i++;
root=(n/root+root)/2;
if(root*root==n){break;}
if(i==n+1){break;}
}
return root;
}
int main()
{ int n;
cout<<"enter number ";
cin>>n;
cout<<"the root of given number is "<<squareroot(n);
return 0;
}
