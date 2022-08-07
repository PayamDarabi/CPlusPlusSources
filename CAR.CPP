#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
void main()
{
int x=250,y=300,r=30,m=0,d=0;
initgraph(&m,&d,"G:\\TC\\BGI\\");
//char ch='x';
while(1)
{
setbkcolor(9);
setcolor(14);
circle(x-50,y,r);
circle(x+100,y,r);
circle(x-50,y,r-20);
circle(x+100,y,r-20);
//setfillstiyle(6,YELLOW);
//floodfill(x-45,y,6);

setcolor(12);
line(x-20,y,x+70,y);
//ellipse(x,y,0,180,r,r);
line(x-150,y,x-80,y);
line(x+130,y,x+200,y);
line(x-150,y,x-120,y-30);
line(x-120,y-30,x-80,y-50);
line(x-80,y-50,x-25,y-90);
line(x-25,y-90,x-50,y-50);
ellipse(x+100,y,0,90,r+70,r+70);
line(x+100,y-100,x+50,y-50);
line(x+50,y-50,x-50,y-50);
 delay(10);
//setcolor(2);
//if(ch==x)
//x+=40;
//else
//x-=40;
// x--;
// delay(10);

x--;
 cleardevice();

 }



getch();
}
