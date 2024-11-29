//program to perform binary search in an array
#include<stdio.h>
int main()
{
	int n,low,high,mid,key;
	printf("Enter the size of the array :");
	scanf("%d",&n);
	int arr[n];
	printf("Enter %d sorted elements in the array:\n ",n);
	for(int i=0;i<n;i++)
	{
		printf("Element %d:",i+1);
		scanf("%d",&arr[i]);
	}
	printf("Enter key:");
	scanf("%d",&key);
	low=0;
	high=n-1;
	while(low<=high)
	{
		mid=(low+high)/2;
		if(arr[mid]==key)
		{
			printf("Element found at index %d",mid);
			break;
		}
		else if(arr[mid]<key)
		{
			low=mid+1;
		}
		else //(arr[mid]>key)
		{
			low=mid-1;
		}
	}
	return 0;
}
