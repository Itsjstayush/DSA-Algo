#include<stdio.h>
int main()
{
	int arr[5][7]={
				{0,0,0,3,4,5,0},
				{0,0,2,5,0,3,0},
				{0,3,0,0,7,0,0},
				{0,0,0,0,2,5,0},
				{0,0,0,0,3,4,0}
			  };
	int count=0;
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<7;j++)
		{
			if(arr[i][j]!=0)
			count++;
		}
	}
//	printf("%d",count);
	int simplematrix[3][count];
	int k=0;
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<7;j++)
		{
			if(arr[i][j]!=0)
			{
				simplematrix[0][k]=i;
				simplematrix[1][k]=j;
				simplematrix[2][k]=arr[i][j];
				k++;
			}
		}
	}
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<count;j++)
		{
			printf("%d\t",simplematrix[i][j]);
		}
	printf("\n");	
	}
return 0;
}
