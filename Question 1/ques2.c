#include<stdio.h>
#include<conio.h>
int main()
{
	int arr[4]={1,2,3,4};
	int i;
	int max=0;
	for(i=0;i<4; i++)
	{
		if(max<arr[i])
		{
			max=arr[i];
		}
	}
	printf("Maximum number is %d :", i);
	return 0;
}
