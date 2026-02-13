#include<stdio.h>
#include<math.h>
int prime(int num)
{
	int i,flag=1;
	for(i=2;i<=sqrt(num)&&flag;i++)
	{
		if(num%i==0)
		{
			flag=0;
			break;
		}
	}
	return flag;
}
int main()
{
	int flag,cnt=0,n,m,num,i;
	printf("请输入要求的素数所处范围：\n");
	scanf("%d %d",&n,&m);
	for(i=n;i<=m;i++)
	{
		num=i;
		flag=prime(num);
		if(flag==1)
		{
			printf("%d\n",num);
			cnt++;
		}
	}
	printf("共%d个",cnt);
	return 0;
}
