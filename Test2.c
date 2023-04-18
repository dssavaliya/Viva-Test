#include<stdio.h>
struct Student{
	
	int roll_no;
	char name[50],adrs[50];
}n1;
main()
{
	int i;
	struct Student s[5];
	for(i=0;i<5;i++)
	{
		printf("Enter Roll_no: ");
		scanf("%d",&s[i].roll_no);
		
		printf("Enter Name : ");
		scanf("%s",&s[i].name);
		
		printf("Enter address: ");
		scanf("%s",&s[i].adrs);
	}
	printf("\n<----------------------------->\n");
		for(i=0;i<5;i++)
	{
	printf("Roll no =%d\nName=%s\nAddress =%s\n\n",s[i].roll_no,s[i].name,s[i].adrs);
}
}
