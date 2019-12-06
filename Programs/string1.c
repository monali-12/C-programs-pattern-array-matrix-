#include<stdio.h>
void main()
{
	char str[30],n;
	int i,c=0;
	printf("enter the string");
	gets(str);
	printf("enter the character");
	scanf("%c",&n);
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]==n)
		{
			c++;
		}	
	}
	printf("the character occure:%d",c);
	
}
