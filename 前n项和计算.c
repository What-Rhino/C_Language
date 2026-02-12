#include<stdio.h>
int main()
{
	int i;
	double sign=1.0;
	int n;
	double sum;
	printf("请输入要计算数列{1/n}的前多少项和");
	scanf("%d",&n);
	for(i=1;i<=n;i++ )
	{
		sum+=sign/i;
		//sign=-sign;
	}
	printf("f(%d)=%lf",n,sum);
	return 0;
}
