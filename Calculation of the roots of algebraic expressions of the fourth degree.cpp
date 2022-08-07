#include<iostream.h>
#include<math.h>
#include<conio.h>
#include<stdlib.h>
#include<graphics.h>

const int IMAX = 800;

class coeffs
{
 public :
          float a, b, c, d, e, x, y, p, q, r, z;

          void getdata(void);
          void divide(void);
          void chkrealcmplx(void);
          void dispreal(float, float, float);
          void dispcomplx(float, float, float);
};


void coeffs :: getdata()
{
  cout<<"Enter coefficients 'a' through 'e' :";
  cin>>a>>b>>c>>d>>e;
}

void coeffs :: divide(void)
{
  int i;
  float y1,z1;

  b = b/a; c = c/a; d = d/a; e = e/a;
  a = 1;
  y = d/c; z = e/c;
  x = 1;

  for(i=1;i<=IMAX;i++)
  {
   y1 = (d-z*(b-y))/((c-z)-y*(b-y));
   z1 = e/((c-z)-y*(b-y));
   y = y1;
   z = z1;

   p = 1;
   q = b-y;
   r = (c-z)-y*(b-y);
  }
}


void coeffs :: chkrealcmplx(void)
{
 float delta1,delta2;
 delta1 = q*q - 4*p*r;
 delta2 = y*y - 4*x*z;

 if(delta1<0)
  {
   cout<<"Roots R1 and R2 are complex";
   cout<<"Roots are :";
   dispcomplx(delta1,p,q);
  }
 if(delta2<0)
  {
   cout<<"Roots R3 and R4 are complex";
   cout<<"Roots are :";
   dispcomplx(delta2,x,y);
  }
  if(delta1>=0)
  {
   cout<<"Roots R1 and R2 are real";
   cout<<"Roots are :";
   dispreal(delta1,p,q);
  }
  if(delta2>=0)
  {
   cout<<"Roots R3 and R4 are real";
   cout<<"Roots are :";
   dispreal(delta2,x,y);
  }
}

void coeffs :: dispreal(float delta,float A,float B)
{
 float r1,r2;

 r1 = (-B+sqrt(delta))/(2*A);
 r2 = (-B-sqrt(delta))/(2*A);

 cout<<r1<<endl;
 cout<<r2<<endl;
}

void coeffs :: dispcomplx(float delta,float A,float B)
{
 float rp,ip;

 delta = -delta;
 rp = -B/(2*A);
 ip = (sqrt(delta))/(2*A);

 cout<<rp<<" +j "<<ip<<endl;
 cout<<rp<<" -j "<<ip<<endl;

}

void line()
{
 char t = 0XC4;
 for(int i = 1;i<=80;i++)
   cout<<t;
}


void main()

 {
  clrscr();

  int gdriver = EGA, gmode = VGAHI, errorcode;
  initgraph(&gdriver, &gmode, "c:\tc\bgi");
  setbkcolor(BLUE);
  coeffs coefficients;
  line();
  cout<<"        PROGRAM TO SOLVE A FOURTH ORDER ALGEBRAIC EQUATION        ";
  line();
  coefficients.getdata();
  line();
  line();
  coefficients.divide();
  coefficients.chkrealcmplx();
  line();
  line();
  getch();
  closegraph();
 }




Author : Saber Boostani
EmaiL : Nights.Rainy72@Yahoo.Com
Site : Www.SourceBaran.Com