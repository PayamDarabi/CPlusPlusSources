#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<graphics.h>
#include<dos.h>
void main()
{
int c, x=200,y=200,r=20, b ,a ,m=0,d=0;
char ch;
initgraph(&m,&d,"");
  while(y<419)
  {
  setcolor(14);
  line(0,440,640,440);
  circle(x,y,r);
  delay(10);
  setcolor(0);
  circle(x,y,r);
  y++;
  }

  a=y-0.25*y;
  while(y>a)
  {
  setcolor(14);
  circle (x,y,r);
  delay(10);
  setcolor(0);
  circle(x,y,r);
  y-=2;
  x++;
  }
//  line(0,440,640,440);

  while(x<320)
  {
  setcolor(14);
  circle(x,y,r);
  delay(10);
  setcolor(0);
  circle(x,y,r);
  x++;
  }
  //line(0,440,640,440);

  while(y<419)
  {
  setcolor(14);
  circle(x,y,r);
  delay(10);
  setcolor(0);
  circle(x,y,r);
   y++;
   x++;
   }
  //line(0,440,640,440);
    b=y-0.125*y;
    while(y>b)
    {
  setcolor(14);
  circle(x,y,r);
  delay(10);
  setcolor(0);
  circle(x,y,r);
    y--;
    x++;
    }
 // line(0,440,640,440);
    while(x<490)

    {
  setcolor(14);
  circle(x,y,r);
  delay(10);
  setcolor(0);
  circle(x,y,r);
  x++;
    }
 // line(0,440,640,440);
    while(y<419)

    {
  setcolor(14);
  circle(x,y,r);
  delay(10);
  setcolor(0);
  circle(x,y,r);
  y++;
  x++;
  }

 // line(0,440,640,440);
  //c=y-0.6225*y;
    while(y>390)

    {
  setcolor(14);
  circle(x,y,r);
  delay(10);
  setcolor(0);
  circle(x,y,r);
   y--;
   x++;
   }
 // line(0,440,640,440);
    while(x<640&&y<419)

    {
  setcolor(14);
  circle(x,y,r);
  delay(30);
  setcolor(0);
  circle(x,y,r);
  x+=2;
  y++;
  }
 // line(0,440,640,440);

getch();
}