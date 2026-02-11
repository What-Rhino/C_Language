#include<stdio.h>
int main()
{
	int x=0;
	int n;
	printf("请输入一个正整数");
	scanf("%d",&x);
	x/=10;
	n++;
	while(x>0){
		n++;
		x/=10;
	}
	printf("该数字的位数是：%d",n);
	return 0;
}
