// two dimensional array
#include<stdio.h>
int main()
{
	int a[2][2];
	int i,j;
	
	printf("Enter a 2 x 2 matrix: ");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	
	printf("\n The given matrix is: \n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
