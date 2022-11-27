#include<iostream>
using namespace std;
int main()
{ int r1,c1,r2,c2;
cout<<"enter the no of rows and columns of first matrix ";
cin>>r1>>c1;
cout<<"enter the no of rows and columns of second matrix ";
cin>>r2>>c2;
int ar1[r1][c1],ar2[r2][c2];
cout<<"enter the values in matrix 1 \n";
for(int i=0;i<r1;i++)
{ for(int j=0;j<c1;j++)
{ cin>>ar1[i][j];  }   } 
cout<<"enter the values in matrix 2 \n";
for(int i=0;i<r2;i++)
{for(int j=0;j<c2;j++)
{ cin>>ar2[i][j];  }   }
if(r1!=r2&&c1!=c2)
{cout<<"addition cant not be performed ";
}
else
{int add[r1][c1];
for(int i=0;i<r1;i++)
{for(int j=0;j<c1;j++)
{ add[i][j]=ar1[i][j]+ar2[i][j];
}
}
cout<<"addition of matrix is \n";
for(int i=0;i<r1;i++)
{for(int j=0;j<c1;j++)
{cout<<add[i][j]<<" ";
}
cout<<endl;
}
}
if(c1!=r2)
{cout<<"\nmultiplication can not be performed ";
return 0;
}
else
{
int mul[r1][c2];
for(int i=0;i<r1;i++)
{ for(int j=0;j<c2;j++)
{mul[i][j]=0;   }    }
for(int i=0;i<r1;i++)
{ for(int j=0;j<c2;j++)
{ for(int k=0;k<c1;k++)
{mul[i][j]+=ar1[i][k]*ar2[k][j];   }     }    }
cout<<"\nmatrix after multiplication \n";
for(int i=0;i<r1;i++)
{ for(int j=0;j<c2;j++)
{cout<<mul[i][j]<<" ";   }
cout<<endl;   }
}
return 0;
}