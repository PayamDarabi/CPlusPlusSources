 
Algorithmic solution is as follows
 
1)  if TopN==1, move the single disc from A to C and stop.
2)  Move the top n-1 discs from A to B, using C as Inter.
3)  Move the remaining disc from A to C.
4)  Move the n-1 discs from B to C, using A as destination(dest).
*/

#include <iostream.h>
#include <stdio.h>
#include <conio.h>

void tower(int,char,char,char); /*prototype*/
int main()
{
    int ndisk;
    clrscr();
    cout<<"\n Enter number of disks <<<::: ";
    cin>>ndisk;
    tower(ndisk,'A','B','C');  /*Calling Function*/
    getch();
    return 0;

} /* End of program */

/********************************************/

// src = Source | aux = Auxiliry | dest = Destination
void tower(int topN, char src,char aux,char dest)
{
    if(topN == 1)
    {
            cout<<"\n Disk 1 from "<<src<<" to "<<dest;
    }
    else
    {
        tower(topN-1,src,dest,aux); //src to aux
        cout<<"\n Disk "<<topN<<" from "<<src<<" to "<<dest;
        tower(topN-1,aux,src,dest); //aux to dest
    }
}



Author : Saber Boostani
EmaiL : Nights.Rainy72@Yahoo.Com
Site : Www.SourceBaran.Com