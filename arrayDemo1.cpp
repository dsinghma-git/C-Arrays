// to find sum and average
#include<stdio.h>
int main()
{
	float a[10];
	int i; 
	float s=0, avg;
	printf("Enter 10 numbers ");
	for(i=0;i<10;i++)
	{
		scanf("%f",&a[i]);
	}
	
	for(i=0;i<10;i++)
	{
		s = s + a[i];
	}
	avg = s/10;
	printf("\n Sum = %.2f\n Average = %.2f",s,avg);
	return 0;
}
