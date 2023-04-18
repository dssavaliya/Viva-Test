#include<stdio.h>
int main()
{
	int n,sum=0,fd,ld;
	
	printf("Enter Number:");
	scanf("%d",&n);
	ld=n%10;
	while(n>=10)
	{
		n=n/10;
	}
	fd=n;
	sum=fd+ld;
	printf("Sum = %d",sum);
	return 0;
}
