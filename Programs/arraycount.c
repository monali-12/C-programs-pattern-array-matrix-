#include<stdio.h>
int main()
{
	int a[100],b[100],n,i,j,count;
	printf("enter the size of array\n");
	scanf("%d",&n);
	printf("enter the array element\n");
	for(i=0;i<n;i++)
	{
	  scanf("%d",&a[i]);
	 }
	 printf("the array element is\n");
	 for(i=0;i<n;i++)
	 {
	 	printf("%d",a[i]);
	 }
     for(i=0;i<n;i++)
	 {
	 	 count=1;
	 	for(j=i+1;j<n;j++)
	 	{
	 		if(a[i]==a[j])
	 		{
	 			
	 			count++;
	 			
			 }
	 		
		 }
		    
	 	  printf("\nthe count of %d is %d",a[i],count);
	 	  printf("\n");
		  }	 
         return 0;
}
