*/
int binarySearch(int arr[], int len, int pat)
{
    int mid, low=0, high=len-1;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(pat<arr[mid])
            high=mid-1;
        else if(pat>arr[mid])
            low=mid+1;
        else
            return mid;
    }
    return -1;
}



Author : Saber Boostani
EmaiL : Nights.Rainy72@Yahoo.Com
Site : Www.SourceBaran.Com