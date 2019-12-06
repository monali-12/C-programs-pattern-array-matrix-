#include<stdio.h>
void main()
{
	int i,j,k;
	for(i=1;i<=5;i++)
	{
		k=1;
		for(j=1;j<=5;j++)
		{ 
		    
		    if(i>=1&&i<=3)
		    {
			
			if(j==4-i||j==2+i&&k)
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
				if(j==8-i||j==i-2&&k)
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
}
