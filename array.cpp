#include<stdio.h>
int main()
{
	int size, i;
	printf("Enter the size of array :");
	scanf("%d",&size);
	int arr[i];
	printf("enter the element of the array:\n");
	for(i=0;i<size;i++)
	{
		printf("Element %d:",i+1);
	    scanf("%d",&arr[i]);
	}
	printf("Element of the the array are :\n");
	for(i=0;i<size;i++)
	{
		printf("%d\n",arr[i]);
	}
	return 0;
}
