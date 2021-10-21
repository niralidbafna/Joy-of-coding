/*
Question:
After seeing the efficiency of Chitti, Dr. Vaseegaran assigns another job to him. The 
new responsibility is to count the frequency of numbers present in a group of numbers. The 
answer should be tabulated. Consider the following example. 
2 6 10 14 18 10 3 7 11 15 19 3 7 10 14
The expected output for the given 
set if numbers is 
2’s : 1
6’s : 1
10’s : 3
14’s : 2
18’s : 1
and so on … 
*/

#include<stdio.h>
int main()
{
	int n, count=0, temp;
	printf("Enter the number of elements in array: ");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the elements of the array: ");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(int i=0;i<n;i++)
	{
		if(arr[i]!=-999)
		{
			temp=arr[i];
			printf("%d occurs: ",temp);
			for(int j=0;j<n;j++)
			{
				if(temp==arr[j])
				{
					count++;
					arr[j]=-999;
				}
			}
			printf(" %d times\n",count);
			count=0;
		}	
	}
}
