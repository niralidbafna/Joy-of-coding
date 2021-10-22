/*
Question:
Given an array of integers, and another integer K. Write a program to find indexes of two elements in an array which sum is equal to K.
This is called two sum problem.
Test case 1
input : [5, 4, 7, 3, 9, 2]
Sum=13
output : Indices are found at 1 and 4 (4 and 1)
Test case 2
input : [1, 2, 3, 4, 5]
Sum=9
output : Indices are found at 3 and 4 (4 and 3)
Test case 3
input : [1, 2, 3, 4, 5]
Sum = 10
output : No indices found
*/
#include<stdio.h>

int main()
{
	int n,k,sum=0;
	printf("Enter number of elements: ");
	scanf("%d",&n);
	int arr[n];
	printf("Enter values: ");
	for(int i=0;i<n;i++)
		scanf("%d",&arr[i]);
		
	printf("Enter k: ");
	scanf("%d",&k);
	
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(i!=j && arr[i]+arr[j]==k)
			{
				printf("Indices are found at: %d and %d (%d and %d)\n",i,j,j,i);
				return 0;
			}
		}
	}
	printf("No indices found\n");
}
		
