#include<stdio.h>
int main()
{
	int x;
	int a,b,c;
	printf("请输入要判断的三位整数");
	scanf("%d",&x);
	int count=x;
	a=x%10;x/=10;
	b=x%10;x/=10;
	c=x%10;
	if(count==a*a*a+b*b*b+c*c*c){
		printf("该数为自幂数"); 
	}
	else{
		printf("该数不是自幂数");
	}
	return 0;
	 
}
