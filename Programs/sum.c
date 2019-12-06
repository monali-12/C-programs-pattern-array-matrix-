#include<stdio.h>
void main()
{ 
    int a[20],i,n,sum=0,j,c,n1;
	printf("how many number");
	scanf("%d",&n);
	printf("enter the elements");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("array contains\n");
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
	printf("the sum of array element\n");
	for(i=0;i<n;i++)
	{
		sum=sum+a[i];
	}
	printf("the sum is%d",sum);
	printf("the sum of 1st and last element\n");
	for(i=0,j=n-1;i<=j;i++,j--)
	{
		printf("%d",a[i]+a[j]);
	}
	printf("frequency of element");
	scanf("%d",&n1);
	for(i=0;i<n;i++)
	{
		if(a[i]==n1)
		{
			c++;
		}
	}
	printf("the number is present%d times",c);
}
