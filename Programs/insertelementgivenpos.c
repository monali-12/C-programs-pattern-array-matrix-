#include<stdio.h>
int main()
{
	int a[100],i,n,pos,new;
	printf("enter the size of array\n");
	scanf("%d",&n);
	printf("\nenter the array elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\ndisplay the array element\n");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\nenter the position of array element\n");
	scanf("%d",&pos);
	printf("\nenter the new element\n");
	scanf("%d",&new);
	for(i=n-1;i>=pos-1;i--)
	
		a[i+1]=a[i];
		a[pos-1]=new;
	
	printf("\nnew array is\n");
	for(i=0;i<=n;i++)
	{
		printf("%d ",a[i]);
	}
	return 0;
}
