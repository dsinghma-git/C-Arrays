//Write a program to input a 3 x 3 matrix and find the 
// maximum elements of this matrix.
#include<stdio.h>
int main()
{
	int a[3][3];
	int i,j;
	printf("Enter a 3x3 matrix:  \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	int max = a[0][0];
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(a[i][j]>max)
			{
				max = a[i][j];
			}
		}
	}
	printf("\n maximum element of matrix = %d",max);

	return 0;
}
