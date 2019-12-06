 #include<stdio.h>
 int main()
{
     int n,i,j,k,sum=0;
	 printf("enter the no of columns and rows\n");
	 scanf("%d",&n);
	  int a[n][n];
	 printf("enter the elements\n");
	 
	 for(i=1;i<=n;i++)
	 {
	 	for(j=1;j<=n;j++)
	 	{
	 		scanf("%d",&a[i][j]);
		 }
	 }
	  printf("\ndisplay the array elements\n");
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
	 	  k=1;
	 	for(j=1;j<=n;j++)
	 	{
	 		if(i<n&&k==1)
	 		{		 
	 		 printf("%d",a[i][j]);
	 		 sum=sum+a[i][j];
	 		 k++;
		    }
		    
             else if(i==n)
			{
				for(j=1;j<=n;j++)
				{
					sum=sum+a[i][j];
					printf("%d ",a[i][j]);
				}
			   	
			}	
			else
			{
				printf(" ");
		    }
		 }
		 printf("\n");
	    }
		 printf("the sum is %d\n",sum);
	 
	
	return 0;
}
