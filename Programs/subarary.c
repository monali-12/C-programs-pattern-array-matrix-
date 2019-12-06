#include<stdio.h>
int main()
{
	int a[10],n,i,j,k,sum=0;
	char snum[100];
	printf("enter the no of elements in the array\n");
	scanf("%d",&n);
	printf("enter the elements in array\n");
	 for(i=0;i<n;i++)
	 {
	 	scanf("%d",&a[i]);
	 }
	 printf("\ndisplay the array elements\n");
	 for(i=0;i<n;i++)
	 {
	 	printf("%d ",a[i]);
	 }
	 printf("the subarray of matrix is\n");
	 for(i=0;i<n;i++)
	 {
	 	for(j=i;j<n;j++)
	 	{
	 		for(k=i;k<=j;k++)
	 		{
	 		   printf("%d ",a[k]);
	 		   sum=sum+a[k];
	 		}
	 		printf("\n");
		 }
	 }
	 printf("the sum is %d\n",sum);
	 while(sum>0)
	 {
	 	
	 	n=sum%10;
	 	sum=sum/10;
	    sprintf(snum,"%d",sum);
	 }
	 return 0;
}
