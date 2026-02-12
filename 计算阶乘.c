#include<stdio.h>
int main()
{
	int n;
	int fact=1;
	int i=1;
	printf("请输入要计算的阶乘");
	scanf("%d",&n);
	for(i=1;i<=n;i++) 
	{
		fact*=i;
	 } 
	 printf("计算结果为%d!=%d",n,fact);
	 return 0;
}
