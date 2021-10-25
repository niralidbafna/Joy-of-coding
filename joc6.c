/*
Given an array (as shown) and a positive integer say 19, write a C program that prints the sub
array and the range of indices whose sum is equal to 19. In this case the sub array is [4,9,6] and
the indices range from 2 to 4. 

Test case 1
input
[5, 4, 7, 3, 9, 2]
Sum=23
output
the sub array is [4,7,3,9]
Indices range from 1 to 4 

Test case 2
input
[1, 7, 3, 8, 5, 9, 6, 2]
Sum=9
output
the sub array is [9]
Indices range from 5 to 5

Test case 3
input
[1, 7, 3, 8, 5, 9, 6, 2]
Sum = 48
output
Not possible to obtain the sum
*/
#include<stdio.h>
int main()
{
	int n, k, sum=0, j=0, count=0, flag=0;
	printf("Enter size of array: ");
	scanf("%d",&n);
	int a[n];
	printf("Enter %d elements: \n",n);
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
		
	printf("Enter an integer k: ");
	scanf("%d",&k);
	
	for(int i=0;i<n;i++)
	{
		j=i;
		sum=0;
		count=0;
		while(sum<k)
		{
			sum+=a[j++];
			count++;
		}
		if(sum==k)
		{
			flag=1;
			printf("The sub array is [");
			for(int l=i;l<i+count;l++)
				printf("%d, ",a[l]);
			printf("\b\b]\n");
			
			printf("Indices range from %d to %d\n",i,i+count-1);
			return 0;
		}	
	}	
	if(!flag)
		printf("Not possible to obtain the sum\n");
}
