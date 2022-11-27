#include<iostream>
using namespace std;
void selection_sort(int ar[],int n)
{  int min,temp;
	for(int i=0;i<n-1;i++)
	{ min=i;
	for(int j=i+1;j<n;j++)
	{
	if(ar[j]<ar[min]){min=j;
	}}
	if(min!=i){
	temp=ar[i];
	ar[i]=ar[min];
	ar[min]=temp;
	
	}
	}
	for(int i=0;i<n;i++)
		{cout<<ar[i]<<" ";}
}
int main()
{ int n;
cout<<"enter the size of array ";
cin>>n;
int ar[n];
cout<<"enetr the elements fo array \n";
for(int i=0;i<n;i++)
{cin>>ar[i];
}
selection_sort(ar,n);
return 0;	
}