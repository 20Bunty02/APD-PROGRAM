#include<iostream>
using namespace std;
void coin_change(int n)
{   int total=0;
    int one_cent=0,ten_cent=0,five_cent=0,twenty_cent=0;
    int fifty_cent=0,dollar=0;
	while(n>0)
	{ total++; 
	  if(n>=100)
	{ dollar++;
	   n-=100;
	   continue;}
	   if(n>=50){
	   fifty_cent++;
	   n-=50;
	   continue;
	   }
	   if(n>=20){
	   twenty_cent++;
	   n-=20;
	   continue;
	   }
	   if(n>=10){
	   ten_cent++;
	   n-=10;
	   continue;
	   }
	   if(n>=5){five_cent++;
     n-=5;
       continue;
	   }
	   if(n>=1){one_cent++;
	   n-=1;
	   continue;}

	}
    cout<<"total coins is "<<total;
    cout<<"\n1 cent= "<<one_cent;
    cout<<"\n5 cent= "<<five_cent;
    cout<<"\n10 cent= "<<ten_cent;
    cout<<"\n20 cent= "<<twenty_cent;
    cout<<"\n50 cent= "<<fifty_cent;
    cout<<"\n1 dollar= "<<dollar;
}
int main()
{ int n;
cout<<"enter amount in cents (1 dollar = 100 cent) ";
cin>>n;
coin_change(n);
	
}