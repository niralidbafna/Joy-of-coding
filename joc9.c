/*
Consider the strings Str1= AACD and Str2= ACDA, Str2 is rotation of Str1, so as ABCD and CDAB.
Considering Str3= ABCD and Str4= ACBD, Str4 is not rotated version of Str3. Given two strings
Str1 and Str2, write a program that determines whether Str2 is a rotation of Str1 
*/
#include<stdio.h>
#include<string.h>
char * rotate(char *str);
int main()
{
	char str[100], str1[100], checkStr[100];
	printf("Enter string: ");
	scanf("%s", str);
	printf("Enter string: ");
	scanf("%s", checkStr);
	strcpy(str1,str);
	for(int i=0;i<strlen(str1);i++)
	{
		if(strcmp(checkStr,rotate(str1))==0)
		{
			printf("%s is a rotated version of %s\n",checkStr,str);
			return 0;
		}
	}
	printf("%s is not a rotated version of %s\n",checkStr,str1);
	
}
char *rotate(char *str)
{
	int i;
	char temp=str[0];
	for(i=0;i<strlen(str)-1;i++)
		str[i]=str[i+1];	
	str[i]=temp;
	str[++i]='\0';
	//printf("%s\n",str);
	return str;
}
