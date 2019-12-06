#include<stdio.h>
int main()
{
	int i,n,x,pos;
	int a[20]={0};
	printf("enter number");
	scanf("%d",&n);
	printf("array element is");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		
	}
	printf("enter number which is search");
	scanf("%d",&x);
//	printf("enter position where element is deleted");
	//scanf("%d",&pos);
//	printf("element is search");
		int count=0;
	for(i=0;i<n;i++)
	{ 
		if(a[i]==x)
		{
			
			count=1;
			a[i+1]=a[i]; 
			
		}
	 } 
/*	printf(" inserted array is");
	for(i=0;i<n;i++)
{
	printf("%d",a[i]);
	}*/	
	if(count==1){
		printf("%delement is found %d",x,i);
		
	}
	else
	{
		printf("%delement is not found",x);
	}
	return 0;
	

}
