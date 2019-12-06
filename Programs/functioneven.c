  #include<stdio.h>
   void printeven(int k)
  {
     	int i;
  	 for(i=1;i<=k;i++)
  	{
	   if(i%2==0)
  	 {
  		printf("%d ",i);
	  }
	  
  }}
  int main()
{
	int n;
	printf("enter the no\n");
	scanf("%d",&n);
	printeven(n);
	return 0;
}

