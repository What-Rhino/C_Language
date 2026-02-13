#include<stdio.h>
int f(int a,int x)//传入底数和指数 
{
	int result;
	if(x==0)
	{
		result=1;//指数为一的情况 
	}
	else
	{
		result=a*f(a,x-1);//递归求结果 
	}
	return result;
	
}
int main()
{
	int a,x,result;
	printf("请输入底数\n");
	scanf("%d",&a);
	printf("请输入指数\n");
	scanf("%d",&x);
	if(x<0)
	{
		printf("请重新输入\n");//如果指数不是自然数，提示重新输入 
		return 0; 
	 } 
	result=f(a,x);
	printf("%d的%d次幂=%d",a,x,result);
	return 0;
}
