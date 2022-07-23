//Write a program to input a 3 x 3 matrix and find the 
// sum of elements of this matrix.
#include<stdio.h>
int main()
{
	int a[3][3];
	int i,j, s=0;
	int avg;
	printf("Enter a 3x3 matrix:  \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			s = s + a[i][j];
		}
	}
	avg = s/9;
	printf("\n Sum of elements of matrix = %d",s);
	printf("\n Average of elements = %d",avg);
	return 0;
}
