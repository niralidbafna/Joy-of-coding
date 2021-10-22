/*
Sanvi is a very naughty kid. She can recognize numbers from 0 to 9. Her mother has to submit
a report to her team leader in next one hour. To engage the naughty Sanvi, she gives her 8 
balloons which has numbered printed on it. Sanvi is asked to put the balloons in a box, in such 
a way that the box shouldn’t contain duplicate balloons with respect to numbers printed on it. 
Help baby Sanvi to finish the task soon and start her mischiefs. 
Test case: 
Input: 1 2 3 1 2 1 3 1 
Output: 1 2 3
*/
#include<stdio.h>
void accept(int, int *);
void removeDuplicate(int, int *, int*);
void display(int *);
int main()
{
	int n, freq[10]={0};
	printf("Enter number of balloons: ");
	scanf("%d",&n);
	int arr[n];
	accept(n,arr);
	removeDuplicate(n,arr,freq);
	display(freq);
}
void accept(int n, int *arr)
{
	printf("Enter balloon numbers: ");
	for(int i=0;i<n;i++)
		scanf("%d",&arr[i]);
}
void removeDuplicate(int n, int *arr, int *freq)
{
	for(int i=0;i<n;i++)
	{
		if(freq[arr[i]]==0)
			freq[arr[i]]=1;
	}
}
void display(int *freq)
{
	printf("\nFinally, The box contains balloons numbered: ");
	for(int i=0;i<10;i++)
	{
		if(freq[i]==1)
			printf("%d, ",i);
	}
	printf("\b\b \n");
}
