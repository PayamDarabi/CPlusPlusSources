#include <conio.h>
#include <iostream.h>
int gcd(int,int);
int main()
{
 int x,y;
 cout<<"enter amount for x and y:";
 cin>>x>>y;
 int k=gcd(x,y);
 cout<<k;
 getch();
 return 0;
}
int gcd(int x,int y)
{
 if(y==0)
  return x;
 else
  return gcd(y,x&y);
}//end



Author : Saber Boostani
EmaiL : Nights.Rainy72@Yahoo.Com
Site : Www.SourceBaran.Com