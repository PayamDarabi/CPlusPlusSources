#include "iostream.h"
#include <conio.h>
class ketabkhaneh
{
private :
char liberaryname[20];
char authorname[20];
int publishyear;

protected :
void set();
void print();
};

class ketab:public ketabkhaneh
{
private :
int booknumber;
public:
void set1();
void print1();
};

class payannameh:public ketabkhaneh
{
private :
int payannamehnumber;
public:
void set2();
void print2();
};

void ketabkhaneh::set()
{
cin>>liberaryname;
cin>>authorname;
cin>>publishyear;
}

void ketabkhaneh::print()
{
cout<<"enter library name: " <<liberaryname<<endl;
cout<<"enter author name: " <<authorname<<endl;
cout<<"enter publish year: "<<publishyear<<endl;
}

void ketab::set1()
{
set();
cin>>booknumber;
}

void ketab::print1()
{
print();
cout<<"enter booknumber: "<<booknumber<<endl;
}


void payannameh::set2()
{
set();
cin>>payannamehnumber;
}

void payannameh::print2()
{
print();
cout<<"enter payannameh number: "<<payannamehnumber<<endl;
}


void main()
{

ketab k1;
payannameh p1;
k1.set1();
k1.print1();
p1.set2();
p1.print2();

getch();
}


