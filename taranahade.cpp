#include <iostream.h>
#include <conio.h>

int main()
{
int** array;
int n,i,j,temp;
cout <<"n ra vared kon:";
cin >> n;
array=new int*[n];
for(i=0;i<n;i++)
{
	array[i]=new int[i+1];
	for(j=0;j<n;j++)
	{
	cout <<"deraye satre " << i+1 <<"sotune " <<j+1<<" :";
	cin >> array[i][j];
	cout << endl;
	}
}

for(i=0;i<n;i++)
{
	for(j=0;j<i;j++)
	 {
	 temp=array[i][j];
	 array[i][j]=array[j][i];
	 array[j][i]=temp;
	 }
}
for(i=0;i<n;i++)
{
	for(j=0;j<n;j++)
	cout << array[i][j] << endl;
}
return 0;
}







