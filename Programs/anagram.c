#include<stdio.h>
#include<string.h>
int main()
{
  char str1[100],str2[100];
  int i,j,l1,l2,temp;
  printf("enter the first string\n");
  scanf("%s",&str1);
  printf("enter the second string\n");
  scanf("%s",&str2);
  for(i=0;str1[i]!='\0';i++);
  l1=i;
  for(j=0;str2[j]!='\0';j++);
  l2=j;
  if(l1!=l2)
  {
  	printf("strings are not anagram");
  }
  
 	for(i=0;i<l1;i++)
  	{
  		for(j=i+1;j<l1;j++)
  		{
  			if(str1[i]>str1[j])
  			{
  				temp=str1[j];
  				str1[j]=str1[i];
  				str1[i]=temp;
			  }
			  if(str2[i]>str2[j])
			  {
			  	temp=str2[j];
			  	str2[j]=str2[i];
			  	str2[i]=temp;
			  }
		  }
	  }
 
	printf("\n the first string are %s",str1);
	printf("\n the second string are %s",str2);
	for(i=0;i<l1;i++)
	{
		if(str1[i]!=str2[i])
	{
		printf("\n strings are  not anagram");
		return 0;
	}
  }
  printf("\n strings are anagrams");
  return 0;
}
