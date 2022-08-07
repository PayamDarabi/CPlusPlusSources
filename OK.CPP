#include<iostream.h>
#include <stdlib.h>
#include<conio.h>
void main()
{
  clrscr();
  char x,x1='a';
  cin>>x;
  int x2=x-x1;

  for(int i=0;i<=x2;i++)
  {
    for(int j=0;j<=i;j++)
    {
      cout<<x;
    }
    cout<<endl;
    x=x-1;
  }
  getch();
}