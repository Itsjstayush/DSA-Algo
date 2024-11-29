#include<stdio.h>


int findMax(int arr[],int n)
{
	int max=arr[0];
	for(int i = 1;i<n;i++)
	{
		if(arr[i]>max)
		{
			max=arr[i];
		}
	}
	return max;
}
void countingSort(int arr[],int n)
{
	int i;
	int max = findMax(arr,n);
	
	int count[100]= {0};
	
	
	for(i=0;i<n;i++)
	{
		count[arr[i]]++;//count = count + arr[i]
	}
	
	for (i=1;i<=max;i++)
	{
		count[i]+= count[i-1];
	}
	
	
	int output[1000];
	
	
	for(i=n-1;i>=0;i--)
	{
		output[count[arr[i]]-1] = arr[i];
		count[arr[i]]--;
	}
	
	for (i=0;i<n;i++)
	{
		arr[i]=output[i];
	}
	
}


void printArray(int arr[],int n)
{
	
	for ( int i = 0;i<n;i++)
	{
		printf("%d  ",arr[i]);
	}
	printf("\n");
	
}


int main()
{
	int arr[]= {0,2,0,8,3,3,1,9};
	int n=sizeof(arr)/sizeof(arr[0]);
	
	printf("Original array: ");
	printArray(arr,n);
	countingSort(arr,n);
	printf("Sorted Array: ");
	printArray(arr,n);
	
	
	return 0;
}

