#include<stdio.h>
void main()
{
	int i,c=0;
	char str[20];
	printf("enter the string");
	gets(str);
	for(i=0;str[i]!='\0';i++)
	{
		c++;
	}
	printf("the length of string is:%d",c);
	for(i=c-1;i>=0;i--)
	printf("%c",str[i]);
}
