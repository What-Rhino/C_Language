#include<stdio.h>
int main()
{
	const int N=9;
	int sort[N];
	int i,j,temp=0;
	printf("请输入要排序的数字");
	for(i=0;i<9;i++)
	{
		scanf("%d",&sort[i]);//将数据存入数组 
	}
	for(i=1;i<N;i++)
	{
		temp=sort[i];//临时存放 
		if(sort[i]<sort[i-1])
		{
			for(j=i-1;j>=0&&sort[j]>temp;j--)
			{
				sort[j+1]=sort[j];//将大的数字排在后面 
				sort[j]=temp;
			}
		}
	}
	for(i=0;i<N;i++)
	{
		printf("%d ",sort[i]);
	}	
	return 0;
} 
