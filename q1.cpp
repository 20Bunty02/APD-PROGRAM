#include<iostream>
using namespace std;
int main()
{ int var1,var2;
cout<<"enter two values ";
cin>>var1>>var2;
cout<<"var1 "<<var1<<" var2 "<<var2;
var1=var1+var2;
var2=var1-var2;
var1=var1-var2;
cout<<"\nvalues after swapping \n";
cout<<"var1 "<<var1<<" var2 "<<var2;
return 0;
}
