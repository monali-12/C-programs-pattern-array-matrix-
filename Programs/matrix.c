#include<st
dio.h>
int main()
{
	int r,c,i,j,k,max=0,max1=0;
	printf("enter the no of row\n");
	scanf("%d",&r);
	printf("enter the no of column\n");
	scanf("%d",&c);
	int a[r][c];
	k=c;
	for(i=1;i<=r;i++)
	{
		for(j=1;j<=c;j++)
		{
	      scanf("%d",&a[i][j]);
			
		}
	}
	for(i=1;i<=r;i++)
	{
		for(j=1;j<=c;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	
	for(i=1;i<=r;i++)
	{
		for(j=1;j<=c;j++)
		{
			if(j==k)
			{
				printf("%d",a[i][j]);
				if(max<a[i][j])
				{
					max=a[i][j];
				}
			}
			
			if(i==j)
			{
				printf("%d",a[i][j]);
				if(max1<a[i][j])
				{
					max1=a[i][j];
				}
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
		k--;
		
	}
	if(max1>max)
	{
		printf("\nmaximum element is %d ",max1);
	}
	else
	{
		printf("\nmaximum element is %d ",max);
	}
	 printf("\nthe max element of first diagonal is %d ",max1);
	 printf("\nthe max1 os second diagonal ids %d ",max);
	  return 0;
	
}
