// Write a program to sort a list of 10 numbers.
// input: 10, 5, 2, 20, 15, 25, 40, 6,13,35
// output:2,5,6,10,13,15,20,25,35,40
#include<stdio.h>
int main()
{
	int a[10];
	int i, j,t;
	printf("Enter 10 numbers ");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<9;i++)
	{
		for(j=0;j<9-i;j++)
		{
			if(a[j]>a[j+1])
			{
				t=a[j];
				a[j]= a[j+1];
				a[j+1]=t;
			}
		}
	}
	
	printf("\n Sorted list is: ");
	for(i=0;i<10;i++)
	{
		printf("%d\t",a[i]);
	}
	return 0;
}
