#include<iostream>
#include <string>
#include<conio.h>
#include<stdio.h>
#include<windows.h>
#include<unistd.h>
using namespace std;
void display_rates(){
	cout<<"1 BHK ROOM RATE PER NIGHT 500\n";
	cout<<"2 BHK ROOM RATE PER NIGHT 1000\n";
	cout<<"LUXARY ROOM RATE PER NIGHT 2500\n";
}
void bill_generator(string name,int age,double mob,int bill){
	Sleep(5000);
	system("cls");
	cout<<"\n                   BILL             \n";
	cout<<"NAME "<<name<<endl;
	cout<<"AGE "<<age<<endl;
	cout<<"MOBILE NO "<<mob<<endl;
	cout<<"TOTAL BILL "<<bill+(0.18*bill)<<endl;
     cout<<"\n\nPRESS ENTER TO CONTINUE";
     getch();
}
int payment(int choice,int days){
	int bill=choice*days;
	system("cls");
	cout<<"YOUR TOTAL BILL WITH TAX IS "<<(bill+0.18*bill);
	cout<<"\n\nPRESS 1 TO MAKE THE PAYMENT\n";
	cout<<"PRESS 2 TO CANCEL THE PROCESS \n";
	int ch;
	cin>>ch;
	if(ch<1){cout<<"ERROR";
	  return -1;}
	  if(ch>=2){
	  cout<<"EXITING SUCCESSFULL ";
	  return 0;
	  }
	  else{
	  cout<<"PRESS 1 TO PAY VIA CASH \n";
	  cout<<"PRESS 2 TO PAY VIA CARD\n";
	  int pay;
	  cin>>pay;
	  if(pay==1){
	  cout<<"BILL GENERATED ";
	  
	  }
	   else if(pay==2){
	   	system("cls");
	  cout<<"ENTER CARD NUMBER ";
      int card_no,cvv,otp;
	  cin>>card_no;
      cout<<"ENTER CVV ";
      cin>>cvv;
      cout<<"ENTER OTP ";
      cin>>otp;
      cout<<"PAYMENT SUCCESSFULL \n";
      cout<<"BILL GENERATED \n";
	  }
	  else{
	  cout<<"PAYMENT FAILED ";
	  return -1;
	  }

	  }
	
return bill;
}
int main()
{ int onebhk[20]={1,0,1,0,0,1,0,1,0,0,0,1,1,0,0,0,1,0,0,1};
int twobhk[10]={1,0,0,1,0,0,0,0,1,0};
int luxary[5]={0,0,1,0,0};
int price[3]={500,1000,2500};
string name;
int age;
double mob;
int ch;
do{
system("cls");
cout<<"                  WELCOME TO HOTEL MANAGMENT SYSTEM \n\n";
cout<<"\nWHAT YOU ARE LOOKING FOR\n\n";
cout<<"1.BOOK NEW ROOM\n";
cout<<"2.SERVICES\n";
cout<<"3.CONTACT US\n";
cout<<"4.EXIT\n";
cout<<"ENTER YOUR CHOICE\n";
cin>>ch;
 system("cls");
switch(ch)
{
	case 1: { display_rates();
		    cout<<"\nPRESS 1 TO BOOK 1 BHK \n";
	        cout<<"PRESS 2 TO BOOK 2 BHK\n";
	        cout<<"PRESS 3 TO BOOK LUXARY ROOM\n";
	        
	        int ch1;
	        cin>>ch1;
	        system("cls");
	        switch(ch1){
	        case 1:{cout<<"LIST OF ROOM AVILABLE \n";
	               for(int i=0;i<20;i++){
	               if(onebhk[i]==0){
	               cout<<"ROOM "<<i+1<<endl;
	               }
	               }
	               cout<<"WHICH ROOM YOU WANT TO BOOK \n";
	               int room;
	               cin>>room;
                   if(room>20||room<1||(onebhk[room-1]==1)){
                   cout<<"ERROR EXITONG ";
                   break;
                   }
                    cout<<"\nENETR YOUR NAME \n";
                    cin>>name;
                    cout<<"ENTER YOU AGE \n";
                    cin>>age;
                    cout<<"ENTER YOUR MOBILE NO \n";
                    cin>>mob;
                   cout<<"ENTER NO OF DAYS YOU ARE STAYING HERE \n";
	               int no_of_days;
	               cin>>no_of_days;
                   int res=payment(500,no_of_days);
                    if(res>0){
                    	onebhk[room-1]=1;
                    bill_generator(name,age,mob,res);
                    }
                    break;}
               case 2: {cout<<"LIST OF ROOM AVILABLE \n";
	               for(int i=0;i<10;i++){
	               if(twobhk[i]==0){
	               cout<<"ROOM "<<i+1<<endl;
	               }
	               }
	               cout<<"WHICH ROOM YOU WANT TO BOOK \n";
	               int room;
	               cin>>room;
                   if(room>10||room<1||(twobhk[room-1]==1)){
                   cout<<"ERROR EXITiNG ";
                   break;
                   }
                    cout<<"\nENETR YOUR NAME \n";
                    cin>>name;
                    cout<<"ENTER YOU AGE \n";
                    cin>>age;
                    cout<<"ENTER YOUR MOBILE NO \n";
                    cin>>mob;
                   cout<<"ENTER NO OF DAYS YOU ARE STAYING HERE \n";
	               int no_of_days;
	               cin>>no_of_days;
                   int res=payment(1000,no_of_days);
                    if(res>0){
                    	twobhk[room-1]=1;
                    bill_generator(name,age,mob,res);
                    }
                    break;}
            case 3:{cout<<"LIST OF ROOM AVILABLE \n";
	               for(int i=0;i<5;i++){
	               if(luxary[i]==0){
	               cout<<"ROOM "<<i+1<<endl;
	               }
	               }
	               cout<<"WHICH ROOM YOU WANT TO BOOK \n";
	               int room;
	               cin>>room;
                   if(room>5||room<1||(luxary[room-1]==1)){
                   cout<<"ERROR EXITONG ";
                   break;
                   }
                    cout<<"\nENETR YOUR NAME \n";
                    cin>>name;
                    cout<<"ENTER YOU AGE \n";
                    cin>>age;
                    cout<<"ENTER YOUR MOBILE NO \n";
                    cin>>mob;
                   cout<<"ENTER NO OF DAYS YOU ARE STAYING HERE \n";
	               int no_of_days;
	               cin>>no_of_days;
                   int res=payment(2500,no_of_days);
                    if(res>0){
                   luxary[room-1]=1;
                    bill_generator(name,age,mob,res);
                    }
                    break;}
       default: cout<<"ERROR \n";


	        }
	        break;
	    }
	        case 2:{//clrscr();
	                system("cls");
	               cout<<"FACILITIES WHICH ARE AVAILABLE WITH 1 BHK \n";
	               cout<<"1.BREAKFAST AND DINNER \n";
	               cout<<"2.BALCONY ACCESS\n";
	               cout<<"3.FULLY FURNISHED ROOM\n";
	               cout<<"\n\n";
	               cout<<"FACILITIES WHICH ARE AVAILABLE WITH 2 BHK\n";
	               cout<<"1. BREAKFAST LUNCH AND DINNER\n";
	               cout<<"2. SWIMMING POOL ACCESS ON WEEKENDS \n";
	               cout<<"3. 12 HOURS ROOM SERVICE\n";
	               cout<<"4. MEDICAL COVERAGE UPTO 50000\n";
	               cout<<"\n\n";
	               cout<<"FACILITIES WHICH ARE AVAILBALE WITH LUXARY ROOMS \n";
	               cout<<"1. BREAKFAST LUNCH AND DINNER\n";
	               cout<<"2. DRINKS IN DINNER ALSO\n";
	               cout<<"3. 24X7 SWIMMING POOL ACCESS\n";
	               cout<<"4. 24 HOURS ROOM SERVICE\n";
	               cout<<"5. MEDICAL COVERAGE UPTO 200000\n";
	               cout<<"6. FREE TAXI SERVICE UPTO 10 KMS\n";

                 break;}
                 case 3: {cout<<"OUR LANDLINE NO IS 12453466 \n";
                          cout<<"OUR EMAIL ID IS 'HOTEL123@GMAIL.COM' \n";
                          cout<<"HEAD OFFICE - NEW DELHI INDIA\n";
                          break;}
                   case 4:{ cout<<"EXITING";
                   	   Sleep(1000);
                   	   system("cls");
                   	break;

                   }       
                     default:      cout<<"YOU ENTERED WRONG CHOICE \n";
                         cout<<"EXITING ";


}
}while(ch<=3&&ch>=1);
return 0;
}