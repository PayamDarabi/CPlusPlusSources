#include<conio.h>
#include<stdio.h>
#include<iostream.h>
#include<string.h>
void main()
{
  clrscr();
  char s[80];
  gets(s);
  int n=1;
  for(int i=0;i<strlen(s);i++)
    if(s[i]!='\0' && s[i]==' ')
      n++;
  cout<<n;
  getch();
}