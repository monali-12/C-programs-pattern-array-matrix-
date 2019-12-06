#include<stdio.h>
int main()
{
   int i,j,k=1,count;
    
   for(i=1;i<=12;i++)
   {
   	   count=1;
   	   for(j=1;j<=4;j++)
   	    {
   	    	
   		if(i>=1&&i<=4&&count<=4)
   		{
		
   		if(j==count)
   		{
   			
   		printf("*");	
   			
		}
   		else
   		{
   			printf(" ");
   	    }
    
	    }
	    count++;
  }
	    for(j=1;j<=4;j++)
            {
							      
            if(i>=5&&i<=7&&count<=3)
		 {
	        
		 	
		 	if(j==count)
		 	 {
		 	 	printf("*");
			  }
		 	 else
			  {
			  	printf(" ");
		      }
		      
			 }
			 count++;
		}
		   for(j=1;j<=4;j++)
		   {
		   
			 if(i>=8&i<=10)
			 {
			 	 
			 	if(j==count)
			 	{
			 		printf("*");
				 }
				 else
				 {
				 	printf(" ");
				 }
				
			 }
			 count++;
		 }
   	
   	   count=1;
   	printf("\n");
   }
   return 0;
	
	
}
