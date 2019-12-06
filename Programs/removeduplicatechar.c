#include<stdio.h>
#include<string.h>
 int main()
{
	char a[100],b[100];
	int i,j,l,k=0,count,temp;
	printf("enter the string\n");
	scanf("%s",&a);
    for(i=0;a[i]!='\0';i++);
	l=i;	
	printf("the length of string is %d\n",l);
  /*	for(i=0;i<l;i++)
	{
		 for(j=i+1;j<l;j++)
		{
		   if(a[i]>a[j])
		   {
		   	  temp=a[j];
		   	  a[j]=a[i];
		   	  a[i]=temp;
		   }
		}
    }
	printf("\nthe sorted string is\n");
	  for(i=0;a[i]!='\0';i++)
	{ 
		printf("%c",a[i]);
	}
	*/
	  for(i=0;i<l;i++)
	{
		for(j=i+1;j<l;j++)
		{
			if(a[j]==a[i])
			{
				for(k=j;k<l;k++)
				{
				   a[k]=a[k+1];
				}
				
			}

		}
	
}
         
    	printf("\nthe new string is %s",a);
	
	return 0;
}
