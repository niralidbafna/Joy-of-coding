/*
Question: 

No twins pls !!!: Mr. Chitti, a robot is assigned a job of reporting to his boss Dr. Vaseegaran
about the existence of twins in a group. Chitti’s job is just to report whether the group is distinct 
or not. Even if one duplicate is present then the group is not unique. Help Mr. Chitti to report. 
Input: an array of integers 
output: Array distinct / Array not distinct
Example: Consider the following array. The array is not distinct as 10 is duplicated. 
Array: 2 6 10 14 18 10 3 7
*/

#include<stdio.h>
int isDistinct(int,int *);
int main()
{
	int n;
	printf("Enter the number of elements in array: ");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the elements of the array: ");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	if(isDistinct(n,arr))
		printf("Array distinct\n");
	else
		printf("Array not distinct\n");
}
int isDistinct(int n,int *arr)
{
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
			if(i!=j && arr[i]==arr[j])
				return 0;
	
	return 1;
}
	
