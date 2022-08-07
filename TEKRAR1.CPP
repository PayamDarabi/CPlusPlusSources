//in the name of GOD
#include<iostream.h>
#include <stdlib.h>
#include <conio.h>
int main()
{
 clrscr();
 int* a = new int[10];
 cout<<"Enter Numbers till 10:"<<endl;
 for(int i=0;i<10;i++)
 {
   cin>>a[i];
 }
 int count;
 int* tekrar = new int[10];
 for(int j=0;j<10;j++)
 {
   if(a[j]!=a[j-1])
   {
     count=0;
     for(int k=0;k<10;k++)
     {
       if(a[k]==a[j])
	count++;

     }
      tekrar[j]=count;
   }
   else
   {
     tekrar[j]=count;
   }

 }
 for(int mm=0;mm<10;mm++)
 {
   cout<<"tedade tekrare adade "<<a[mm]<<"="<<tekrar[mm]<<"."<<endl<<:"bar";
 }
 getch();


 return 0;
}