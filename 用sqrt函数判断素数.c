#include<stdio.h>
#include<math.h>
int prime(int m)
{
	int i,flag=1;
	for(i=2;i<=sqrt(m)&&flag;i++)
	{
		if(m%i==0) flag=0;
	}
	return flag; 
}
int main()
{
	int m,i;
	int flag;
	printf("input\n");
	scanf("%d",&m);
	flag=prime(m);
	if(flag)
	{
		printf("%d is",m);
	}
	else
	printf("%d is not",m);
	return 0;
}
