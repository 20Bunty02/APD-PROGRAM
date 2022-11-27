#include<iostream>
using namespace std;
void sort(int ar[],int start,int mid,int end){
	int merge[end-start+1];
	int ind1=start;
	int ind2=mid+1;
	int ind3=0;
	while(ind1<=mid&&ind2<=end){
		if(ar[ind1]<=ar[ind2]){
			merge[ind3++]=ar[ind1++];
		}
		else{
			merge[ind3++]=ar[ind2++];
		}
	}
	while(ind1<=mid){
		merge[ind3++]=ar[ind1++];
	}
	while(ind2<=end){
		merge[ind3++]=ar[ind2++];
	}
	for(int i=0,j=start;i<(sizeof(merge)/sizeof(merge[0]));i++,j++){
		ar[j]=merge[i];
	}

}
void merge_sort(int ar[],int start,int end){
if(start>=end){
return;
}
int mid=start+ (end-start)/2;
merge_sort(ar,start,mid);
merge_sort(ar,mid+1,end);
sort(ar,start,mid,end);

}
int main()
{
	int n;
	cout<<"enter the size of array ";
	cin>>n;
	cout<<"enter the values in array ";
	int ar[n];
	for(int i=0;i<n;i++){
		cin>>ar[i];
	}
	merge_sort(ar,0,n-1);
	cout<<"sorted array is \n";
    for(int i=0;i<n;i++){
    	cout<<ar[i]<<" ";
    }
}