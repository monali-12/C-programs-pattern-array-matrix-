# include<stdio.h>
  int main()
{
	int i,j,k;
	for(i=1;i<=4;i++)
	{ 
	     k=1;
		for(j=1;j<=7;j++)
		{
			if(i%2!=0)
			{
		      if(j>=5-i&&j<=i+3&&k)
		       {
			
               printf("*");
				k=0;
			    }
			    else
			    {
			    	printf(" ");
			    	k=1;
				}
           } 
       else
       {
       	if(j>=5-i&&j<=i+3&&k)
       	{
       		printf("*");
       		k=0;
       	}
       	else
       	{
       		printf(" ");
       		k=1;
	    }    
	   }
		}
  		
  	printf("\n");	
	}
return 0;	
}
