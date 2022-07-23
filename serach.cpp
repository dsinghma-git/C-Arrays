// write a program to search a number in the list of 10 numbers.
#include<stdio.h>
int main()
{
	int a[10]= {1,5,3,15,12,25,22,35,30,7};
	int k;
	int i;
	printf("Enter a number to be searched?");
	scanf("%d",&k);
	
	for(i=0;i<10;i++)
	{
		if(k==a[i])
		{
			printf("\n Given number %d is found.",k);
			break;
		}
	}
	if(i==10)
	{
		printf("\n Given number %d is not found.",k);
	}
	return 0;
}
