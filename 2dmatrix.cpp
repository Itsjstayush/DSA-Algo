//creationof 2d array
#include<stdio.h>
int main()
{
	int rows,cols;
	printf("Enter no of rows:");
	scanf("%d",&rows);
	printf("Enter no of coloumns:");
	scanf("%d",&cols);
	int arr[rows][cols];
	for(int i=0;i<rows;i++)
	{
		for(int j=0;j<cols;j++)
		{
			printf("Enter value at arr[%d][%d]:",i,j);
			scanf("%d",&arr[i][j]);
		}
	}
	for(int i=0;i<rows;i++)
	{
		for(int j=0;j<cols;j++)
		{
			printf("%d\t",arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}
