#include<iostream>
#include<time.h>
using namespace std;
void fsui(int n)    //fibonacci using iteration
{ int temp,v1=0,v2=1;
 for(int i=2;i<n;i++)
 { temp=v2;
    v2=v1+v2;
  v1=temp; 
  cout<<v2<<" ";}
return ;  }
void fsur(int n) //fibonacci using recursion
{ 
    static int n1=0,n2=1,n3;    
    if(n>0){    
         n3 = n1 + n2;    
         n1 = n2;    
         n2 = n3;    
         cout<<n3<<" ";
		 fsur(n-1);      }
	}
int main()
{ int n;
float timespent1=0.0,timespent2=0.0;
cout<<"enter the value of n ";
cin>>n;
cout<<"\nresult using iterative function is 0 1 ";
clock_t begin1 = clock();
fsui(n);
clock_t end1 = clock();
timespent1 += (double)(end1 - begin1) /CLOCKS_PER_SEC;
cout<<"\ntime taken by iterative function is "<<timespent1;
cout<<"\nresult using recursive function is 0 1 ";
clock_t begin2 = clock();
fsur(n-2);
clock_t end2 = clock();
timespent2 += (double)(end2 - begin2) / CLOCKS_PER_SEC;
cout<<"\ntime taken by recursive function is "<<timespent2;
return 0;
}
