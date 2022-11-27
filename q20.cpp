#include<iostream>
#include<time.h>
using namespace std;
int partition(int ar[],int low,int high)
{int pivot=ar[high];
int i=low-1;
int temp;
for(int j=low;j<high;j++)
{ if(ar[j]<pivot)
{i++;
temp=ar[i];
ar[i]=ar[j];
ar[j]=temp;
}
}
i++;
temp=ar[i];
ar[i]=pivot;
ar[high]=temp;
return i;
}
void quick_sort(int ar[],int low,int high)
{  if(low<high){ 
int pvind=partition(ar,low,high);
quick_sort(ar,low,pvind-1);
quick_sort(ar,pvind+1,high);
}
}
int main()
{ int n;
clock_t time_taken;
cout<<"enter the value of n ";
cin>>n;
int ar[n];
cout<<"enter the value of array ";
for(int i=0;i<n;i++)
{ cin>>ar[i];
}
time_taken=clock();
quick_sort(ar,0,n-1);
time_taken=clock()-time_taken;
cout<<"array after sorting ";
for(int i=0;i<n;i++)
{
	cout<<ar[i]<<" ";
}
cout<<"\ntotal time taken by quick sort algo is "<<(float)time_taken/CLOCKS_PER_SEC;
return 0;
}
