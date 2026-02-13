#include<stdio.h>
int main()
{
	int m,n,i;
	float t=1;
	printf("请输入两个数");
	scanf("%d %d",&m,&n);
	for(i=(m>n)?m:n;i>1;i--)
	{
		if(m%i==0&&n%i==0)
		{
			printf("最大公约数为%d\n",i);
			break;
		}
	}	while(t!=0)
	{
	    t=m%n;
		m=n;		
		n=t;
	}
	printf("最大公约数为%d",m);
	return 0;
 } 
