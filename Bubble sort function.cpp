void BubbleSort(int temp[], int len)
{
    int i, j, item;
    for(i=len-1;i>0;i--)
        for(j=0;j<i;j++)
            if(temp[j]>temp[j+1])
            {
                item=temp[j];
                temp[j]=temp[j+1];
                temp[j+1]=item;
            }
}



Author : Saber Boostani
EmaiL : Nights.Rainy72@Yahoo.Com
Site : Www.SourceBaran.Com