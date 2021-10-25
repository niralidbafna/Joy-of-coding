/*
Given an image, Sanvi is not comfortable viewing it in her computer/tab. She wants a better
viewing experience. Write a program that keeps Sanvi happy.
(Hint. Image is represented as matrix; The input is a matrix and the output is a matrix as well.)
(Matrix Rotation)
Input: 
1 2 3
4 5 6
7 8 9

Output:
3 6 9
2 5 8
1 4 7
*/
#include<stdio.h>
int main()
{
	int n=3;
	int a[n][n],b[n][n];
	printf("Enter %dx%d matrix: \n",n,n);
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	
	printf("\n\nYou entered %dx%d matrix: \n",n,n);
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			b[i][j]=a[j][n-i-1];
		}
	}
	printf("\n\nRotated %dx%d matrix: \n",n,n);
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			printf("%d\t",b[i][j]);
		}
		printf("\n");
	}
}
