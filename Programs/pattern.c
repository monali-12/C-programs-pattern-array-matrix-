#include<stdio.h>
int main()
{
  int i,j,k;
  for(i=1;i<=7;i++)
  {
  	   for(j=1;j<=5;j++)
  	{
  		k=1;
  		if(i%2==0)
  		{
		  if(j==1||j==3||j==5&&k==1)
  		{
           printf(" *");
            k=0;
		}
		else
		{
			printf("   ");
			k=1;
		}
	   }
		else 
		  {
		  	  k=1;
		    	if(j==2||j==4&&k==1)
		     	{
		  	    	printf(" *");
		            k=0; 	    
			  }
			  else
			  {
			  	printf("  ");
			  	 k=1;
			  }
		}
	  }
	  printf("\n");
	  }	
	   return 0;

}
