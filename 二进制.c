#include<stdio.h>
int main()
{
	long int x;
	printf("请输入一个不超过四十亿的数:\n");
	scanf("%d",&x);
	char a[32];//最大可以存储2的32次方-1的数字 约为四十亿 
	int i,j;
	while(x!=0)
	{
		if(x%2==0)
		{
			a[i]='0';//如果可以被二整除则记录为1 
			i++;
		}
		else
		{
			a[i]='1';//不能被二整除则记录为0 
			i++;
		}
		x/=2;//每轮结束后该数字除以二 
	}
	for(j=i-1;j>=0;j--)
	printf("%c",a[j]);//倒叙输出记录的“0”或“1” 
	return 0;
} 
