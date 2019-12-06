#include<stdio.h>
void main()
{
	int a[20],n,i,j,t;
	printf("how many numbers");
	scanf("%d",&n);
	printf("enter the array element");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;++i)
	{
		for(j=i+1;j<n;++j)
		{
			if(a[i]>a[j])
			{
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		}
	}
	printf("array in ascending order");
	for(i=0;i<n;++i)
	printf("%d",a[i]);
}
