#include<stdio.h>
int main()
{
	int i,j,k;
	char c;
	printf("input");
	scanf("%c",&c);
		for(i=1;i<=10;i++)
		{
			for(j=1;j<=i;j++)
			{
				printf("%c",c);
			}
		printf("\n");
		 } 
		for(i=10;i>=1;i--)
		{
			for(j=1;j<=i;j++)
			{
			printf("%c",c)	;
			}	
			printf("\n");
		}	
		for(i=1;i<=10;i++)
		{
			for(j=1;j<i;j++)
			{
				printf(" ");
			}
			for(k=10;k>=i;k--)
			{
				printf("%c",c); 
			}
			printf("\n");
		}
		for(i=1;i<=10;i++)
		{
			for(j=10;j>i;j--)
			{
				printf(" ");
			}
			for(k=1;k<=i;k++)
			{
				printf("%c",c);
			}	
			printf("\n");
		}

	 return 0;
 } 
