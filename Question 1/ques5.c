#include<stdio.h>
#include<conio.h>
typedef struct car{
	int model;
	int year;
	int price;
}car;
int main(){
	int i;
	car arr[3];
	arr[0].model=18;
	arr[0].year= 2006;
	arr[0].price=80000;
	arr[1].model=19;
	arr[1].year=2004;
	arr[1].price=90000;
	arr[2].model=20;
	arr[2].year=2001;
	arr[2].price=100000;
	for(i=0;i<3;i++){
		printf("\n model is %d",arr[i].model);
		printf("\n year is %d",arr[i].year);
		printf("\n price  is %d",arr[i].price);
		printf("\n\n");
	}
	return 0;	
}
