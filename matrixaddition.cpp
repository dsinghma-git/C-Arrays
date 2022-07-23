// matrix addition
#include<stdio.h>

int main()
{
	int a[2][2],b[2][2],c[2][2];
	int i,j;
	printf("Enter first 2x2 matrix:  ");
	for(i=0;i<2;i++)
		for(j=0;j<2;j++)
			scanf("%d",&a[i][j]);
	printf("Enter second 2x2 matrix:  ");
	for(i=0;i<2;i++)
		for(j=0;j<2;j++)
			scanf("%d",&b[i][j]);
	//summing the above matrices
	for(i=0;i<2;i++)
		for(j=0;j<2;j++)
			c[i][j]=a[i][j] + b[i][j];
	
	printf("\n First matrix is given as: \n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	printf("\n Second matrix is given as: \n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d\t",b[i][j]);
		}
		printf("\n");
	}
	printf("\n Sum matrix is given as: \n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d\t",c[i][j]);
		}
		printf("\n");
	}
	return 0;		
}
