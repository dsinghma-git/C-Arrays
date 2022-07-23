/* Array: is a collection of data of same type. 
   Array is used to store a number similar type of data under a single name.
   Each individual data is referenced by an index or subscript.
   Array is declared as:
   syntax:  
   				data_type arrayName[size];
   	example:
   				float gpa[10];
*/
#include<stdio.h>
int main()
{
	float gpa[10];
	int i;
	float s=0,avg;
	
	printf("Enter gpa of 10 persons:  ");
	for(i=0;i<10;i++)
	{
		scanf("%f",&gpa[i]);
	}
	for(i=0;i<10;i++)
	{
		s = s + gpa[i];
	}
	avg = s/10;
	printf("\n Average gpa = %f",avg);
	return 0;
}
    

