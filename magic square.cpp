#define SIZE 160             /* Consider a memory for increasing the size. */

#include "stdio.h"
#include "stdlib.h"
#include "conio.h"

int m[SIZE][SIZE];

void odd_num(int n);
void even_num(int n);
void output(int n);
void _swap(int i1, int j1, int i2, int j2);

main()
{
    int i,j,n;
    char *s="           ";

    printf("\n***************************************************************************");
     printf("\n*                     <  < <   MAGIC  SQUARE   > >  >                     *");
     printf("\n*                            by: SepehrM.com                              *");
     printf("\n***************************************************************************");

     while(1) {
        printf("\n\n\n:-) Input the number(3-%d): ",SIZE);
          gets(s);
          n=atoi(s);
                if(n < 3 || n > SIZE) break;
        if(n%2) odd_num(n);
          else even_num(n);
        output(n);
     }

     printf("\n\n* .. Quit .. .  [[ <   MAGIC  SQUARE   > ]]  . .. *\n\n\n");
}

void odd_num(int n)
{
    int i,j,num=1;
     int nn=n*3/2;

    for(i=0; i < n; i++)
          for(j=0; j < n; j++)
            m[(j-i+nn)%n][(i*2-j+n)%n]=num++;
}

void even_num(int n)
{
     int i,j,num=1;
    int nminus=n-1,nmiddle=n/2,nn=n*n+1;
    int osl=0;
     int switch_row[2];
    int last_switch_column;
    int first_block=(n-2)/4,second_block=nminus-first_block;
     int first_inside=n/4,second_inside=nminus-first_inside;

    for(j=0; j < n; j++)
          for(i=0; i < n; i++) {
            if(i >= first_inside && i <= second_inside && j >= first_inside && j <= second_inside)
                m[i][j]=num;
            else if((i > first_block && i < second_block) || (j > first_block && j < second_block))
                m[i][j]=nn-num;
                else m[i][j]=num;
            num++;
        }
    if(!(n%4)) return;

     switch_row[0]=random(nmiddle-1)+first_block+1;
    switch_row[1]=random(nmiddle-1);
    if(switch_row[1] >= first_block) switch_row[1]+=(nmiddle+1);
    last_switch_column=random(nmiddle-1);
    if(last_switch_column >= first_block) last_switch_column+=(nmiddle+1);

/* Simply, you can write as follows.. 
    switch_row[0]=nmiddle;
    switch_row[1]=0;
    last_switch_column=0;
*/

    for(i=0; i < nmiddle; i++) {
        if(i==first_block || i==second_block) {
            osl=1-osl;
            continue;
          }
        _swap(second_block, i, second_block, nminus-i);
        _swap(i, first_block, nminus-i, first_block);
        _swap(i, second_block, nminus-i, second_block);
        _swap(i, switch_row[osl], nminus-i, switch_row[osl]);
    }
     for(i=first_block+1; i < second_block; i++) {
        _swap(first_block, i, second_block, i);
        _swap(i, first_block, i, second_block);
    }
    _swap(first_block, nmiddle, second_block, nmiddle);
    _swap(last_switch_column, first_block, last_switch_column, second_block);
}

void output(int n)
{
    int i,j,ch,err=0;
    unsigned long sum,sl,sc,sd1=0,sd2=0;

    sum=(unsigned long)n*(n*n+1)/2;
    printf(";-) SUM = %lu.     * ..check sum... .  .    ",sum);
    for(j=0; j < n; j++) {
        sd1+=m[j][j];
        sd2+=m[j][n-j-1];
          sl=0;
        sc=0;
        for(i=0; i < n; i++) {
            sl+=m[i][j];
            sc+=m[j][i];
        }
        if(sl!=sum) {
            err++;
                printf("\n> Sum of the row-(%d) is %lu. It's incorrect..",j+1,sl);
        }
        if(sc!=sum) {
            err++;
            printf("\n> Sum of the column-(%d) is %lu. It's incorrect..",j+1,sc);
        }
    }
    if(sd1!=sum) {
          err++;
        printf("\n> Sum of the diagonal-(\\) is %lu. It's incorrect..",j+1,sd1);
    }
    if(sd2!=sum) {
        err++;
        printf("\n> Sum of the diagonal-(/) is %lu. It's incorrect..",j+1,sd2);
    }
    if(err) printf("\n\n* %d errors are happened.",err);
     else printf("- O.K. -");
    printf("\n\n:-? Do you want to display(Y/n)? ");
    ch=getch();
    if(ch=='n' || ch=='N') return;
    printf("\n---+---------------------------------------------------------------------------");
    for(j=0; j < n; j++) {
        printf("\n%2d)] ",j+1);
        for(i=0; i < n; i++)
                printf("%4d,",m[i][j]);
    }
    printf("\n---+---------------------------------------------------------------------------");
}

void _swap(int i1, int j1, int i2, int j2)
{
    int k;

     k=m[i1][j1];
    m[i1][j1]=m[i2][j2];
    m[i2][j2]=k;
}

//end



Author : Saber Boostani
EmaiL : Nights.Rainy72@Yahoo.Com
Site : Www.SourceBaran.Com