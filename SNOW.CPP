#include <graphics.h>
#include <conio.h>
#include <dos.h>
#include <stdlib.h>
int snow[500][2];
void showsnow()
{
  int x,y;
  for(int i=0;i<500;i++)
  {
    do {
      x=random(640);
      y=random(400);
    } while(getpixel(x,y)!=0);
    putpixel(x,y,15);
    snow[i][0]=x;
    snow[i][1]=y;
  }
  return;
}
void snowing()
{
  int x,y;
  for(int i=0;i<500;i++)
  {
    putpixel(snow[i][0],snow[i][1],0);
    x=snow[i][0]+random(3)-1;
    y=snow[i][1]+random(2);
    if(getpixel(x,y)==0)
      {snow[i][0]=x;snow[i][1]=y;}
    else
      if(getpixel(snow[i][0],snow[i][1]+1)==0)
	snow[i][1]++;
      else
	if(getpixel(snow[i][0]-1,snow[i][1]+1)==0)
	  {snow[i][0]--;snow[i][1]++;}
	else
	  if(getpixel(snow[i][0]+1,snow[i][1]+1)==0)
	    {snow[i][0]++;snow[i][1]++;}
	  else
	  {
	    putpixel(snow[i][0],snow[i][1],15);
	    snow[i][0]=random(640);snow[i][1]=0;
	  }
    putpixel(snow[i][0],snow[i][1],15);
  }
  return;
}
void main()
{
  int m=0,d=0,i,j,x,y;
  initgraph(&m,&d,"");
  randomize();
  bar(0,400,639,479);
  setfillstyle(SOLID_FILL,BROWN);
  bar(300,300,400,400);
  line(300,300,350,250);
  line(350,250,400,300);
  floodfill(350,260,15);
  setfillstyle(SOLID_FILL,CYAN);
  bar(190,360,200,400);
  bar(175,340,215,360);
  getch();
  showsnow();
  while(!kbhit())
    snowing();
  getch();
  restorecrtmode();
  return;
}
