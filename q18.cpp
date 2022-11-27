#include<iostream>
using namespace std;
void sort(int ar[],int n)
{ int temp; 
for(int i=0;i<n;i++)
{for(int j=0;j<n-i;j++)
{if(ar[j]>ar[j+1])
{temp=ar[j];
ar[j]=ar[j+1];
ar[j+1]=temp;
}
}
}
}
int remove_duplicate(int ar[],int n)
{int temp[n],j=0;
for(int i=0;i<n-1;i++)
{ if(ar[i]!=ar[i+1])
	{
		temp[j++]=ar[i];
	}
	
}
temp[j++]=ar[n-1];
for(int i=0;i<j;i++)
{
	ar[i]=temp[i];
}	
return j;
}
int main()
{int n;
cout<<"enter the size of array ";
cin>>n;
int ar[n];
cout<<"enter the elements \n";
for(int i=0;i<n;i++)
{cin>>ar[i];
}
sort(ar,n);
int index=remove_duplicate(ar,n);
cout<<"array after removing duplicate value ";
for(int i=0;i<index;i++)
{
	cout<<ar[i]<<" ";
}
return 0;
}