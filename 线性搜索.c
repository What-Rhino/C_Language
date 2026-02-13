#include<stdio.h>
int search(int key,int a[],int len) //定义线性搜索函数 
{
	int ret=-1;//初始化标记值-1为找不到该数字 
	int i;
	for(i=0;i<len;i++)
	{
		if(key==a[i])
		{
			ret=i;//记录该数字所处位置 
			break;
		}
	}
	return ret;
}
int main()
{
	int num[10]={1,2,3,4,5,6,7,8,9,10};
	int i,x,ret;
	printf("input\n");
	scanf("%d",&x);
	ret=search(x,num,sizeof(num)/sizeof(num[0]));//将数据传入函数 
	if(ret==-1)
	{
		printf("未找到\n"); 
	}
	else
	{
		printf("找到了\n在%d的位置",ret);
	}
	return 0;
}
