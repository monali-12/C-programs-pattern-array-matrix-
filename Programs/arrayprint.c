#include<stdio.h>
int main()
{
	int  a[20],n,i,n1;
	printf("enter the number\n");
	scanf("%d",&n);
	printf("enter the array element\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("the array contain\n");
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
	printf("\nenter the number to find the position\n");
	scanf("%d",&n1);
	for(i=0;i<n;i++)
	{
		if(n1==a[i])
		{
		
	        printf("\nthe number  %d is present in array in %d position",n1,i);
	        return 0;
	    }
	
		
   }
   
   printf("\nno is not present");
   return 0;
}
