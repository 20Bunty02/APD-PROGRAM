#include<iostream>
using namespace std;
void dth(int a)     //decimal to hexadecimal
{ char ar[10];  int i,j;
for(i=0;a!=0;i++)
{ if((a%16)<=9)
{ar[i]=a%16;}
else if(a%16==10){ar[i]='A';}
else if(a%16==11){ar[i]='B';}
else if(a%16==12){ar[i]='C';}
else if(a%16==13){ar[i]='D';}
else if(a%16==14){ar[i]='E';}
else if(a%16==15){ar[i]='F';}
  a=a/16;
}
for(j=i-1;j>=0;j--)
{ if(ar[j]=='A'){cout<<"A";}
else 
if(ar[j]=='B'){cout<<"B";}
else
 if(ar[j]=='C'){cout<<"C";}
else 
if(ar[j]=='D'){cout<<"D";}
else 
if(ar[j]=='E'){cout<<"E";}
else 
if(ar[j]=='F'){cout<<"F";}
else{cout<<int(ar[j]);}
}  }
void dtb(int n)         //decimal to binary
{ int ar[10];
  for(int i=0;i<10;i++)
{  if(n>0){
   ar[i]=n%2;
   n=n/2;}
else{ar[i]=0;}
}
for(int i=9;i>=0;i--)
{cout<<ar[i];}}
void dto(int a)    //decimal to octal
{ int i,j,ar[10];
  for( i=0;a!=0;i++){
  ar[i]=a%8;
 a=a/8;  }
for(j=i-1;j>=0;j--)
{cout<<ar[j];}  }
int main()
{int n;
cout<<"enter decimal number ";
cin>>n;
cout<<"Binary form          ";
dtb(n);
cout<<"\nHexadecimal form     ";
dth(n);
cout<<"\nOctal form           ";
dto(n);
}
