#include<iostream>
using namespace std;
int main(){
	cout<<"enter amount in cents (1 dollar=100cents) ";
	int cents;
	int coins=0;
	cin>>cents;
	int one_cents=0,five_cents=0,ten_cents=0,twenty_cents=0,fifty_cents=0,dollars=0;
    while(cents>0){
    coins++;
    if(cents>=100){
    dollars++;

    cents=cents-100;
    }
    else if(cents>=50){
    fifty_cents++;
    cents-=50;
    }
    else if(cents>=20){
    twenty_cents++;
    cents-=20;
    }
    else if(cents>=10){
    ten_cents++;
    cents-=10;
    }
    else if(cents>=5){
    five_cents++;
    cents-=5;
    }
    else{
    one_cents++;
    cents-=1;
    
    }
    }

    cout<<"total coins = "<<coins;	
    cout<<"\ntotal one dollar coins "<<dollars;
    cout<<"\ntotal 50 cents coins "<<fifty_cents;
    cout<<"\ntotal 20 cents coins "<<twenty_cents;
    cout<<"\ntotal 10 cents coins "<<ten_cents;
    cout<<"\ntotal 5 cents coins "<<five_cents;
    cout<<"\ntotal 1 cents coins "<<one_cents; 
return 0;
}