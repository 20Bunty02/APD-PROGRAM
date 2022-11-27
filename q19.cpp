#include<iostream>
using namespace std;
void insertion_sort(int ar[],int n)
{ int curr,j;
 for(int i=0;i<n;i++)
{ curr=ar[i];
j=i-1;
while(ar[j]>curr&&j>=0)
{ar[j+1]=ar[j];
j--;
}
ar[j+1]=curr;
}
}
int main()
{ int n;
cout<<"enter the size of array ";
cin>>n;
int ar[n];
cout<<"enter the values of array \n";
for(int i=0;i<n;i++)
{ cin>>ar[i];
}
insertion_sort(ar,n);
cout<<"sorted array \n";
for(int i=0;i<n;i++)
{cout<<ar[i]<<" ";
}
return 0;
}