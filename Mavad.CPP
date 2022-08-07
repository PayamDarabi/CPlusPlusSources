// In The Name Of God
#include<iostream.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>

float ar_Tc[6];
float ar_Pc[6];
float ar_w[6];
char* ar_name[6][1];

void MakeTable()
{
  ar_name[0][0]="Metan";
  ar_Tc[0]=190.6;
  ar_Pc[0]= 5971971;
  ar_w[0] = 0.0104;

  ar_name[1][0]="Etan";
  ar_Tc[1]=300.0;
  ar_Pc[1]= 4869804;
  ar_w[1] = 0.0979;

  ar_name[2][0]="Hydrogen";
  ar_Tc[2]= 33.2;
  ar_Pc[2]= 1158689;
  ar_w[2] = -0.2202;

  ar_name[3][0]="Helium";
  ar_Tc[3] = 5.2;
  ar_Pc[3] = 227395;
  ar_w[3] = 0;

  ar_name[4][0]="Oxygen";
  ar_Tc[4]= 163.5;
  ar_Pc[4]= 5041436;
  ar_w[4] = 0.0215;

  ar_name[5][0]="Carbon Dioxide";
  ar_Tc[0] = 304.2;
  ar_Pc[0] = 7382250;
  ar_w[0] = 0.2667;

}
void PrintTable()
{
	for (int i = 0; i < 6; i++)
	{
		cout<<i+1<<"=> Name = | "<<ar_name[i][0]<<" |\n";
	}
	cout<<"\n \n Lotfan Adade Morede Nazar Ra Vared Namaiid : ";
}
void main()
{
	// Moteghayyer ha

	float T,P,V;
	float Tc,Pc,ac,at,Tr,w,a,m,b;
	float R = 8.314;
	// Jadval

	MakeTable();
	point:
	PrintTable();
    int i = -1;
	cin>>i;
    if(i>6 && i < 0)
    {
    	cout<<"Lotfan Adade Sahihii vared namaiid !!!";
    	getch();
    	clrscr();
    	goto point;
    }

 	Tc = ar_Tc[i - 1];
 	Pc = ar_Pc[i - 1];
 	w  =  ar_w[i - 1];

 	// Daryaft
    cout<<"Baraye Mohasebeye Feshar 1\nBaraye Mohasebeye Hajme Muli 2\n Ra Vared Konid : ";
    int num = -1;
    cin>>num;

   if(num != 1 && num != 2)
	   exit(0);

	float Dv = 0;

	if(num == 1)
	{
		cout<<"Hajme Muli Ra Vared Konid : ";
		cin>>V;
		cout<<"Dama Ra Vared Konid : ";
		cin>>T;

	}
	else
	{

		cout<<"Feshar Ra Vared Konid : ";
		cin>>P;
		cout<<"Dama Ra Vared Konid : ";
		cin>>T;
		cout<<"Meghdar Khataye V Ra Vared Konid : ";
		cin>>Dv;

	}


    // Mohasebat 

 	b=0.07780*(R*Tc)/Pc;
	ac =0.45724*((pow(R,2)*pow(Tc,2))/Pc);
	Tr = T/Tc;
    m =  0.37464 + 1.54226*(w) - 0.26992*pow(w,2);
	a = 1 +(m*(1-pow(Tr,0.5)));
	at = ac*a;
	if(num == 1)
	{
		P = ((R*T)/(V - b)) - (at/(V*(V+b))+(b*(V-b)));
		cout<<"Feshar Barabare : "<<P;
	}
	if(num == 2)
	{
		V = (R*T)/P;
		while(1==1)
		{
			V = (R*T)/((P+((at/(V*(V+b))+(b*(V-b)))))+b);
			float V1 = (R*T)/((P+((at/(V*(V+b))+(b*(V-b)))))+b);
			if(V - V1 < Dv)
			{
				V=V1;
				break;
			}
		}
		cout<<"Hajme Muli Barabare : "<<V;
	}

getch();

}