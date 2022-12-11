#include<iostream>
#include <cstdlib>
using namespace std;
int ispresent(int el,int code[]){
	for(int i=0;i<4;i++){
		if(code[i]==el){
			return 1;
		}
	}
	return 0;
}
int main(){
	int code[4]={1,5,2,8};
	int attempts=0;
	int hits=0;
	int sink;
	int guess[4];
	while(hits<4){
      cout<<"\nENTER 4 DIGIT NUMBER ";
       for(int i=0;i<4;i++){
       	cin>>guess[i];
       }
     attempts+=1;
     if(code==guess){
     	hits=4;
     }
     else{
     	hits=0;
     	sink=0;
     	for(int i=0;i<4;i++){
     		if(guess[i]==code[i]){
     			hits+=1;
     		}
     		else if(ispresent(guess[i],code)){
     			sink+=1;
     		}
     	}
     	cout<<"YOU GOT "<<hits<<" HITS AND "<<sink<<" SINKS";
     }
	}
	cout<<"IT TOOK YOU TO "<<attempts<<" ATTEMPTS TO GUESS THE CODE";
	return 0;
}