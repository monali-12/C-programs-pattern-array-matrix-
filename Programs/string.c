#include<stdio.h>
void main()
{
	int i,c=0;
	char str[20],ch;
	printf("enter the string");
	gets(str);
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
			c++;
	}
		printf("the count=%d",c);
}
