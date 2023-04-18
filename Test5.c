#include<stdio.h>

void main()
{
	int i,j,k=0,l=1,n=5;	

	
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++,k++,l++)
		{
			if(k%2==0)
			{
				printf("%c",(char)(l+96));		
			}
			else
			{
				printf("%c",(char)(l+64));
			}
		}
		printf("\n");					
	}
}
