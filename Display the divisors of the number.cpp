#include<iostream.h>
#include<conio.h>

void main()
{
    clrscr();
    unsigned long int n; // Input number
    register unsigned long int i; // Counter
    unsigned long int sum=0;
    cout<<"\nYek adad vared konid: ";
    cin>>n;
    cout<<endl<<endl;
    cout<<"1"<<endl;
    for(i=2;i<=(n/2);i++){
        if(n%i==0){
            cout<<i<<endl;
            sum=sum+i;
        } // End of if
    } // End of for
    cout<<n<<endl;
    cout<<"\n\nJam'e maghsom aleih haye "<<n<<" mishavad "<<sum;

    getch();
}
//end



Author : Saber Boostani
EmaiL : Nights.Rainy72@Yahoo.Com
Site : Www.SourceBaran.Com