#include <iostream.h>
#include <conio.h>

void main()
{
    int x1[99]={0}, x2[99]={0}, out[99]={0},i=-1,i2=-1,count;
    char temp[99];
    cout<<"Enter the first number:"<<endl; //get 1st number
    do //get it using getche()
    {
        i++;
        temp[i]=getche();
    }while(temp[i]!=13);
    i--;
    int ii=i;
    for(int c=0;c<=i;c++) //convert 1st number from char to int
    {
        x1[c]=temp[ii]-48;
        ii--;
    }

    ii=i;
    cout<<"\n\nFirst number: ";
    for(;ii>=0;ii--)
        cout<<x1[ii];
    cout<<endl;

    cout<<"\nEnter the second number:"<<endl; //get 2nd number
    do //get it using getche()
    {
        i2++;
        temp[i2]=getche();
    }while(temp[i2]!=13);
    i2--;
    ii=i2;
    for(c=0;c<=i2;c++) //convert 2nd number from char to int
    {
        x2[c]=temp[ii]-48;
        ii--;
    }


    cout<<"\n\nSecond number: ";
    ii=i2;
    for(;ii>=0;ii--)
        cout<<x2[ii];

    count=(i>i2)?i:i2; //recognize biggest array
    int ex=0, temp2, temp3; //define some vars for temporary number and the extra
    for(ii=0;ii<=count;ii++) //+ the arrays
    {
        temp2=(x1[ii]+x2[ii]);
        temp2+=ex;
        if(temp2<10)
            out[ii]=temp2;
        else
        {
            temp3=(temp2/10);
            ex=temp3;
            temp3*=10;
            out[ii]=(temp2-temp3);
        }

    }

    cout<<"\n\nResult:"<<endl;

    for(;count>=0;count--)
        cout<<out[count];


}



Author : Saber Boostani
EmaiL : Nights.Rainy72@Yahoo.Com
Site : Www.SourceBaran.Com

