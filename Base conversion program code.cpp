#include <iostream.h>
#include <conio.h>
#include <math.h>
//----------------------------------------------//
char MyChar(long int num)
{
char a;
if (num <= 9 && num >= 0) a = num + 48;
    else if (num == 10) a = 'A';
    else if (num == 11) a = 'B';
    else if (num == 12) a = 'C';
    else if (num == 13) a = 'D';
    else if (num == 14) a = 'E';
    else if (num == 15) a = 'F';
return a;
}
//----------------------------------------------//
long int Myflag(long int mabna ,char num[])
{
long int i = 0 , counter = 0;
long int mynum;
long int flag = 1;

for ( i =0 ; num[i] != '\0' ; i++)
{
if (num[i] >=48 && num[i] <=57) mynum = num[i]-48 ;
else if (num[i] == 'A' || num[i] == 'a') mynum = 10;
else if (num[i] == 'B' || num[i] == 'b') mynum = 11;
else if (num[i] == 'C' || num[i] == 'c') mynum = 12;
else if (num[i] == 'D' || num[i] == 'd') mynum = 13;
else if (num[i] == 'E' || num[i] == 'e') mynum = 14;
else if (num[i] == 'F' || num[i] == 'f') mynum = 15;
if (mynum >= mabna) flag = 0;
}
return flag;
}
//----------------------------------------------//
long int Myten(long int mabna , char num[])
{
long int i = 0 , count = 0 , counter = 0;
long int ten = 0;
long int mynum;
for (i = 0 ; num[i] != '\0' ; i++ ) counter++;
counter--;
for ( i = counter ; i >=0 ; i--)
{
if (num[i] >=48 && num[i] <=57) mynum = num[i]-48 ;
else if (num[i] == 'A' || num[i] == 'a') mynum = 10;
else if (num[i] == 'B' || num[i] == 'b') mynum = 11;
else if (num[i] == 'C' || num[i] == 'c') mynum = 12;
else if (num[i] == 'D' || num[i] == 'd') mynum = 13;
else if (num[i] == 'E' || num[i] == 'e') mynum = 14;
else if (num[i] == 'F' || num[i] == 'f') mynum = 15;
ten =ten +(mynum * pow(mabna , count));
count++;
}
return ten;
}
//----------------------------------------------//
int main()
{
clrscr();
long int mabna1 , mabna2 ,  count = 0 ,  ten , i , mod;
char all[100] , number , num[100];
cout << "Please Enter The Input Base= ";
cin >> mabna1;
cout << "Please Enter The Number= ";
cin >> all;
if (!Myflag (mabna1 , all))
{
cout << "\nThe Number Does Not Math With The Input Base";
}
else
{
cout << "Please Enter The Output Base= ";
cin >> mabna2;
ten = Myten (mabna1 , all);
mod = ten % mabna2;
num[0] = MyChar(mod);
while (ten >= mabna2)
{
ten /= mabna2;
mod = ten % mabna2;
count++;
num[count] = MyChar(mod);
}
for (i = count ; i >= 0 ; i--)
{
cout << num[i];
}
}
getch();
return 0;
}
//end




Author : Saber Boostani
EmaiL : Nights.Rainy72@Yahoo.Com
Site : Www.SourceBaran.Com