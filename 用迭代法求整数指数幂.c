#include<stdio.h>
double f(double a,int x)
{
	int i;
	double t=a,result;
	if(x>0)//指数大于零的情况 
	{
		for(i=0;i<x-1;i++)
		{
			 a*=t;
		}
		result=a;
	}
	else if(x<0)//指数小于零的情况 
	{
		for(i=0;i<(-x)+1;i++)
		{
			a/=t;
		}
		result=a;
	}
	else result=1.0;//指数等于零的情况 
	return result;
}
int main()
{
	int x;
	double a,result;
	printf("请输入底数：\n");
	scanf("%lf",&a);
	printf("请输入指数：\n");
	scanf("%d",&x);
	result=f(a,x);
	printf("%.0lf的%d次幂=%5.5f\n",a,x,result);
	return 0;
}
