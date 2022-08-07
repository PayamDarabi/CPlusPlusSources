//in the name of GOD
#include<iostream.h>
#include <stdlib.h>
#include <conio.h>
int main()
{

 clrscr();

 int a [5][5];
 int flag=0;
 cout<<"Enter Numbers: "<<endl;
 for(int i=0;i<5;i++)
 {
   for(int j=0;j<5;j++)
      {
	cin>>a[i][j];
      }
   cout<<endl;
 }

 for(int k=0;k<5;k++)
 {
   for(int jj=0;jj<5;jj++)
   {
     if(a[k][jj]!=a[jj][k])
       flag=1;
   }
 }

 if(flag)
   cout<<"Motegharen Nist :p ";
 else
   cout<<"Motegharen AAst :) ";

getch();
 return 0;
}