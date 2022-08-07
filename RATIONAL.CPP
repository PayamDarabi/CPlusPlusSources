#include<iostream.h>
#include<conio.h>

class Ratio
{
  public:
 // ratio(int n=0,int d=1) : num(n),den(d) { }
  void print(int num,int den)
  {
    double result = (num)/den;
    double r1= (num) % den;
    cout<< num << '/' << den << '=' << result<<'.'<<r1<<endl;
  }
  double sum(int n1,int d1,int n2,int d2)
  {
    if(d1==d2)
      return (n1+n2)/d1;
    else
     return  ((n1*d2) + (n2*d1))  / (d1*d2);
  }
  double tafrigh(int n1,int d1,int n2,int d2)
  {
    if(d1==d2)
      return (n1-n2) / d2;
    else
     return ( (n1*d2) - (n2*d1) ) / (d1*d2);
  }
  double multipy(int n1,int d1,int n2,int d2)
  {
    return (n1*n2) / (d1*d2);
  }
  double divide(int n1,int d1,int n2,int d2)
  {
    return (n1*d2) / (d1*n2);
  }
  private:
  int num,den;
};
void main()
{
 clrscr();
 int n1,n2,d1,d2;
 cout<< "soorate kasre aval ra vared konid"<<endl;
 cin>>n1;
 cout<< "makhraje kasre aval ra vared konid"<<endl;
 cin>>d1;
 cout<< "soorate kasre dovom ra vared konid"<<endl;
 cin>>n2;
 cout<< "makhraje kasre dovom ra vared konid"<<endl;
 cin>>d2;
 Ratio r;
 cout<<"Sum ("<<n1 <<" / "<<d1<<" + "<<n2<<" / "<<d2<<")="<<r.sum(n1,d1,n2,d2)<<endl;
 cout<<"Mines ("<<n1 <<" / "<<d1<<" - "<<n2<<" / "<<d2<<")="<<r.tafrigh(n1,d1,n2,d2)<<endl;
 cout<<"Multipy ("<<n1 <<" / "<<d1<<" * "<<n2<<" / "<<d2<<")="<<r.multipy(n1,d1,n2,d2)<<endl;
 cout<<"Divide ("<<n1 <<" / "<<d1<<" + "<<n2<<" / "<<d2<<")="<<r.divide(n1,d1,n2,d2)<<endl;
 r.print(n1,d1);
 getch();
}