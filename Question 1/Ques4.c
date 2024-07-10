#include<stdio.h>
#include<conio.h>
int main()
{
	int arr[3]={5,6,7,};
	int i;
	int sum;
	for(i=0;i<3;i++)
	{
		sum=arr[i]*arr[i];
		printf("\nsquare of arr[%d] : %d", i,sum);
	}
	return 0;
}
