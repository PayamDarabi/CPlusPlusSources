*/
void quickSort(int x[], int left, int right)
{

        int i = left, j = right;

        int tmp;

        int pivot = x[(left + right) / 2];


        while (i <= j)
        {

                while (x[i] < pivot)

                        i++;

                while (x[j] > pivot)

                        j--;

                if (i <= j)
                {

                        tmp = x[i];

                        x[i] = x[j];

                        x[j] = tmp;

                        i++;

                        j--;

                }

        }


        if (left < j)

                quickSort(x, left, j);

        if (i < right)

                quickSort(x, i, right);

}



Author : Saber Boostani
EmaiL : Nights.Rainy72@Yahoo.Com
Site : Www.SourceBaran.Com