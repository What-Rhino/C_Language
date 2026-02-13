#include<stdio.h>
int sum(int a,int b)
{
	if(a>b)
	return a;
	else
	return b;
}
int main()
{
	int a,b,c;
	int ret=0;
	printf("请输入要比较的三个整数\n");
	scanf("%d %d %d",&a,&b,&c);
	ret=sum(a,b);
	ret=sum(ret,c);
	printf("三个数中最大的数字是：%d",ret);
	return 0;
}
