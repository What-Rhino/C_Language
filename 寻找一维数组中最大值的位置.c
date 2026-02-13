#include<stdio.h>
void maxID(int a[],int n,int c[])//
{
	int i,max,t=a[0];
	for(i=1;i<n;i++)
	{
		if(t<a[i])
		{
			t=a[i];//寻找最大值 
		}	
	}
	for(i=0;i<n;i++)
	{
		if(t==a[i])
		{
			c[i]++;//和最大值相等的数字在下标集中加一 
		}
	}
} 
int main()
{
	int n,i;
	printf("请输入数据的个数\n");
	scanf("%d",&n);
	int a[n],c[n],cnt=0;
	printf("请输入\n");
	for(i=0;i<n;i++)
	{
		c[i]=0;//初始化下标集 
		scanf("%d",&a[i]);
	}
	maxID(a,n,c);
	for(i=0;i<n;i++)
	{
		if(c[i]==1) 
		{
			cnt++;//计数器 
			printf("最大值元素下标为%d\n",i);
		}
	}
	printf("最大的元素个数有%d个\n",cnt);
	return 0;
}
