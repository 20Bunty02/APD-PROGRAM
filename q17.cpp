#include<iostream>
#include<climits>
using namespace std;
int main()
{ int n,min=INT_MAX,max=INT_MIN;
cout<<"enter the size of array ";
cin>>n;
int array[n];
cout<<"enter the values of array \n";
for(int i=0;i<n;i++)
{ cin>>array[i];
}
for(int i=0;i<n;i++)
{if(array[i]>max)
{ max=array[i];
}
if(array[i]<min)
{min=array[i];
}
}
cout<<"minimum element in array is "<<min;
cout<<"\nmaximum element in array is "<<max;
return 0;
}