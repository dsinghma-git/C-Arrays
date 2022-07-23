// matrix transpose
#include<stdio.h>

int main()
{
	int a[2][2],t[2][2];
	int i,j;
	printf("Enter first 2x2 matrix:  ");
	for(i=0;i<2;i++)
		for(j=0;j<2;j++)
			scanf("%d",&a[i][j]);
	//transposing above matrices
	for(i=0;i<2;i++)
		for(j=0;j<2;j++)
			t[i][j] = a[j][i];
	
	printf("\n First matrix is given as: \n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	printf("\n Transpose matrix is given as: \n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d\t",t[i][j]);
		}
		printf("\n");
	}

	return 0;		
}
