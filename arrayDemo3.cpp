// to find maximum from given numbers
#include<stdio.h>
int main()
{
	int a[10];
	int i,max;
	printf("Enter 10 numbers ");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	
	max = a[0];
	for(i=1;i<10;i++)
	{
		if(a[i]>max)
		{
			max = a[i];
		}
	}
	
	printf("\n Maximum number = %d",max);
	return 0;
}
