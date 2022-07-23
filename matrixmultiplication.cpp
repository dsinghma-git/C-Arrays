// matrix multiplication asking size from user
#include<stdio.h>
int main()
{
	int r1,c1,r2,c2;
	int a[50][50], b[50][50],c[50][50];
	int i,j,k;
	aa:
	printf("Enter size of first matrix");
	scanf("%d%d",&r1,&c1);
	printf("\n Enter size of second matrix");
	scanf("%d%d",&r2,&c2);
	if(c1!=r2)
	{
		printf("\n Given matrices are not compatible for multiplicatiion.");
		printf("\n Enter the size again");
		goto aa;
	}
	else
	{
		printf("\n Enter first matrix of size %d by %d",r1,c1);
		for(i=0;i<r1;i++)
			for(j=0;j<c1;j++)
				scanf("%d",&a[i][j]);
		printf("\n Enter second matrix of size %d by %d",r2,c2);
		for(i=0;i<r2;i++)
			for(j=0;j<c2;j++)
				scanf("%d",&b[i][j]);
				
		// code for multiplication
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c2;j++)
			{
				//c[i][j]=0;
				for(k=0;k<c1;k++)
				{
					c[i][j] = c[i][j] + a[i][k]* b[k][j];
				}
			}
		}
		
	 printf("\n First matrix:\n");
     for(i=0;i<r1;i++)
     {
     	for(j=0;j<c1;j++)
     	{
     		printf("%d\t",a[i][j]);
		 }
		 printf("\n");
	 }
	  printf("\n second matrix:\n");
     for(i=0;i<r2;i++)
     {
     	for(j=0;j<c2;j++)
     	{
     		printf("%d\t",b[i][j]);
		 }
		 printf("\n");
	 }	
     printf("\n Product matrix:\n");
     for(i=0;i<r1;i++)
     {
     	for(j=0;j<c2;j++)
     	{
     		printf("%d\t",c[i][j]);
		 }
		 printf("\n");
	 }
   }
	return 0;	
}
