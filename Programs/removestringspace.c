#include<stdio.h>
#include<string.h>
void main()
{
	char str[100];
	int i,j,l;
	printf("enter the string\n");
	scanf("%[^\n]s",&str);
	 for(i=0;str[i]!='\0';i++);
	 l=i;
	 printf("the length of string is %d\n",l);
	 for(i=0;i<l;i++)
	 {
	 	if(str[i]==' ')
	 	{
	 		for(j=i+1;)
	 		 i++;
	 		 l--;
		 }
	 }
	 printf("the string is %s\n",str);
}
