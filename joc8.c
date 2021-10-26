/*
Baby Sanvi’s mother is preparing her for monthly assessment. To assess Sanvi’s recognition
and counting ability, mother shows a English sentence say “a big black bear sat on a big black
rug” and ask her to identify each letter and to tell the most frequent alphabet. In this case it’s a
with count 6. Automate this process by writing a program in C.
Note: Assume that the sentence will have only lower-case letters and no special characters
*/
#include<stdio.h>
int main()
{
	int freq[27]={0}, max=0, maxindex=0;
	char str[100];
	printf("Enter string: ");
	scanf("%[^\n]s", str);
	for(int i=0;str[i]!='\0';i++)
		freq[str[i]-97]++;
		
	for(int i=0;i<27;i++)
	{
		if(freq[i]>max)
		{
			max=freq[i];
			maxindex=i;
		}
	}
	for(int i=0;i<27;i++)
		if(freq[i]==max)
			printf("%c occurs %d times\n",(97+maxindex),max);
}
	
	
