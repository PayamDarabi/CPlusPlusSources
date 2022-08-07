#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<stdio.h>
char * f(char *s)
{
 char * x ;
 int xi=0;
 for(int i=0;i<strlen(s);i++)
 {
   x[xi++]= s[i];
   x[xi++]=' ';
   
 }
 return x;

}
void main()
{
 clrscr();
 cout<<"enter jomle"<<endl;
 char *s;
 gets(s);
 char * z = f(s);
 puts(z);
 getch();
}