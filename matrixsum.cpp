//program to add to matrix 
#include<stdio.h>
int main()
{
	int row,cols;
	printf("Enter no of rows:");
	scanf("%d",&row);
	printf("Enter no of cols:");
	scanf("%d",&cols);
	int matrix1[row][cols],matrix2[row][cols],sum[row][cols];
	for (int i=0;i<row;i++)
	{
		for (int j=0;j<cols;j++)
		{
			printf("Element at matrix1[%d][%d]:",i,j);
			scanf("%d",&matrix1[i][j]);
		}
	}
	printf("Matrix1 :\n");
	for (int i=0;i<row;i++)
	{
		for (int j=0;j<cols;j++)
		{
			printf("%d\t",matrix1[i][j]);
		}
		printf("\n");
	}
	for (int i=0;i<row;i++)
	{
		for (int j=0;j<cols;j++)
		{
			printf("Element at matrix2[%d][%d]:",i,j);
			scanf("%d",&matrix2[i][j]);
		}
	}
	printf("Matrix2 :\n");
	for (int i=0;i<row;i++)
	{
		for (int j=0;j<cols;j++)
		{
			printf("%d\t",matrix2[i][j]);
		}
		printf("\n");
	}
	for (int i=0;i<row;i++)
	{
		for (int j=0;j<cols;j++)
		{
			sum[i][j]= matrix1[i][j]+matrix2[i][j];
		}
	}
	printf("\nSum :\n");
	for (int i=0;i<row;i++)
	{
		for (int j=0;j<cols;j++)
		{
			printf("%d\t",sum[i][j]);
		}
		printf("\n");
	}
	
	
	
return 0;	
}
