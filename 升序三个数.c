#include<stdio.h>
int main()
{
	int a,b,c,max,mid,min;
	printf("请输入要比较的三个数字\n");
	scanf("%d %d %d",&a,&b,&c);
	if(c>b&&b>a)
	{
		max=c;
		mid=b;
		min=a;
	}
	if(b>c&&c>a)
	{
		max=b;
		mid=c;
		min=a;
	}
	if(c>a&&a>b)
	{
		max=c;
		mid=a;
		min=b;
	}
	if(a>c&&c>b)
	{
		max=a;
		mid=c;
		min=b;
	}
	if(b>a&&a>c)
	{
		max=b;
		mid=a;
		min=c;
	}
	if(a>b&&b>c)
	{
		max=a;
		mid=b;
		min=c;
	}
	printf("升序排列为：%d %d %d",min,mid,max);
	return 0;
}

