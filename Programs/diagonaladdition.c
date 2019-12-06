#include<stdio.h>
int main()
{
	int i,j,n,d1=0,d2=0,d3=0,d4=0,d5=0,d6=0,d7=0;
	printf("enter the no of row and column\n");
	scanf("%d",&n);
	int a[n][n];
	printf("enter the matrix elements\n");
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("\ndisplay the arry elements\n");
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			printf("%d ",a[i][j]);
		}
		 printf("\n");
	}
	 for(i=1;i<=n;i++)
	 {
	 	for(j=1;j<=n;j++)
	 	{
	 		if(j==i+2)
	 		{
	 			d2=d2+a[i][j];
	 		}
	 		if(j==i+1)
	 		{
	 			d3=d3+a[i][j];
			 }
			 if(i==j)
			 {
			 	d4=d4+a[i][j];
			 }
			 if(j==i-1)
			 {
			 	d5=d5+a[i][j];
			 }
			 if(j==i-2)
			 {
			 	d6=d6+a[i][j];
			 }
			 if(j==i+3)
			 {
			 	d1=d1+a[i][j];
			 }
			 if(j==i-3)
			 {
			 	d7=d7+a[i][j];
			 }
		 }
	 }
	 printf("the sum is %d %d %d %d %d %d %d",d1,d2,d3,d4,d5,d6,d7);
	
	return 0;
}
