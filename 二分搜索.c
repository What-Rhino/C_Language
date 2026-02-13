#include<stdio.h>
int main()
{
	const int N=10;
	int num[N];
	int low=0;
	int mid,i=0,j,x,temp;
	int high=N;
	printf("input");//输入已知数组 
	for(i=0;i<N;i++)
	{
		scanf("%d",&x);
		num[i]=x;
	}
		for(i=1;i<N;i++)//对数据进行排序 
	{
		temp=num[i];
		if(num[i]<num[i-1])
		{
			for(j=i-1;j>=0&&num[j]>temp;j--)
			{
				num[j+1]=num[j];
				num[j]=temp;
			}
		}
	}
	scanf("%d",&x);
	while(low<=N-1&&high>=0)//进行二分搜索 
	{
		mid=(low+high)/2; 
		if(x>num[mid])
		{
			low=mid+1;//将下指针增大 
		}
		else if(x<num[mid])
		{
			high=mid-1;//将下指针减小 
		}
		else
		break;
	}
	if(low>high)
	{
		printf("未找到");
	}
	else
	{
		printf("找到了\n在%d的位置",low);
	} 
	return 0;
	
}
