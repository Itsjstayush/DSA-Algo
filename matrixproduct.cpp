//program to multiply two array
#include<stdio.h>
int main()
{
	int r1,r2,c1,c2,i,j;
	
	printf("Enter no of row is matrix 1:");
	scanf("%d",&r1);
	printf("Enter no of cols is matrix 1:");
	scanf("%d",&c1);
	int matrix1[r1][c1],matrix2[r2][c2];
	for (i=0;i<r1;i++)
	{
		for ( j=0;j<c1;j++)
		{
			printf("Element at matrix1[%d][%d]:",i,j);
			scanf("%d",&matrix1[i][j]);
		}
	}
	
	printf("Enter no of row is matrix 2:");
	scanf("%d",&r2);
	printf("Enter no of cols is matrix 2:");
	scanf("%d",&c2);
	for (i=0;i<r2;i++)
	{
		for (j=0;j<c2;j++)
		{
			printf("Element at matrix2[%d][%d]:",i,j);
			scanf("%d",&matrix2[i][j]);
		}
	}
	if(c1!=r2)
	{
		printf("Matrix not of same order....");
		return 0;
	}
//	//else
	return 0;
}

