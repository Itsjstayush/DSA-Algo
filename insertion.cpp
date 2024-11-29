#include<stdio.h>
int main()
{
	int j,key;
	int  a[100];
//	printf("Enter the size of array:");
//	scanf("%d",&n);
//	printf("Enter the array:");
//	for(i=0;i<=n-1;i++)
//	{
//		scanf("%d",&a[i]);
//	}
	for(int i=1;i<5;i++)
	{
		key=a[i];
		j=i-1;
		while (j >= 0 && a[j] > key) 
		{
            a[j + 1] = a[j];
            j = j - 1;
        }
        a[j+1]=key;
        for(int i=0;i<5;i++)
		{
		printf("%d\t",a[i]);
		}printf("\n");
	}
	for(int i=1;i<5;i++)
	{
		printf("%d\t",a[i]);
	}
	return 0;
}
