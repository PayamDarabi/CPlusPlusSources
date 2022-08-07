
#include <iostream.h>
#include <string.h>
#include <conio.h>
#include <stdio.h>
class string
{
private:
char text[40];
public:
void show()
{
cout << text << "\n";
}
string operator + (string s)
{
string temp;
strcpy(temp.text, text);
strcat (temp.text, s.text);
return temp;
}
string operator + (char s[])
{
string temp;
strcpy(temp.text, text);
strcat (temp.text, s);
return temp;
}
string operator++()
{
char temp[40];
strcpy(temp , text);
strcat(text,temp);
}
friend string operator +(char s[] , string s2)
{
string temp;
strcpy(temp.text , s);
strcat(temp.text , s2.text);
return temp;
}
string operator =(char s[])
{
strcpy(text , s);
}
string operator =(string s)
{
strcpy(text , s.text);
}
};
void main()
{
string s1 , s2 , s3;
clrscr();
s1 = "Ali";
char temp[]={"Ali"};
s2 = temp;
s3 = "Hasan";
s1++;
s1.show();  //show = AliAli
s1 = temp + s3;
s1.show();   // show = AliHasan
s2 = s1;
s2.show();  //show = AliHasan
s2 = s2 + "Majid";
s2.show();  //show = AliHasanMajid
getch();
}




Author : Saber Boostani
EmaiL : Nights.Rainy72@Yahoo.Com
Site : Www.SourceBaran.Com
