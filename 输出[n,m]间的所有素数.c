#include<stdio.h>
#include<math.h>
int isprime(int num)//判断素数 
{
	int i,flag=1;//默认都为素数返回值为1 
	for(i=2;i<=sqrt(num)&&flag;i++)
	{
		if(num%i==0)
		{
			flag=0;//不是素数返回值为0 
			break;
		}
	}
	return flag;
}
int main()
{
	int i,m,n,cnt=0;
	printf("请输入范围（如：[3，5]则输入3 5）：\n");
	scanf("%d %d",&n,&m);
	if(m>n&&n>1)//判断区间是否符合条件 
	{
		for(i=n;i<=m;i++)
		{
			if(isprime(i)==1)
			{
				printf("%d\n",i);
				cnt++;//出现一个素数计数器加一 
			}
		}
		printf("total=%d\n",cnt);	
	}
	else//如果不符合条件提示重新输入 
	{
		printf("请重新输入！\n");	
	} 
	return 0;
} 
