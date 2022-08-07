#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
int * f1(int a[],int len)
{
   for(int i=0;i<len;i++)
   {
     a[i]=random(10);
   }
   return a;
}

int f2(int temp[], int len)
{
 int x=0;
 for(int i=0;i<len;i++)
 {
   for(int j=0;j<len;j++)
   {
      if(temp[i]>temp[j])
      {
	x=1;
      }
   }

 }
 return x;
}

void main()
{
  randomize();
  clrscr();
  int * a;
  int n;
  cin>>n;
  a=new int[n];
  a=f1(a,n);
  for(int i=0;i<n;i++)
  {
    cout<<a[i];
  }
  if(f2(a,n)==1)
  {
    cout<<"soudi nist"<<endl;
  }
  else
  {
    cout<<"soudiye"<<endl;
  }
    getch();
}