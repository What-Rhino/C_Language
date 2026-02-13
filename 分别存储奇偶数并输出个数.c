#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	int i,j,x=0,y=0,t;
	srand(time(0));
	int num[20][2]={0};
	for(i=0;i<20;i++)
	{
		t=rand()%9+1;
		if(t%2==0)
		{
			num[x][0]=t;//二维数组第零列存储偶数 
			x++; 
		}
		else
		{
			num[y][1]=t;//二维数组第一列存储奇数 
			y++;
		}
	}
	num[x][0]=-1;
	num[y][1]=-1;
	printf("-1代表结束\n");
	printf("偶数  奇数\n"); 
	for(i=0;i<20;i++)
	{
		printf("%d       %d\n",num[i][0],num[i][1]);
	}
	printf("偶数%d个  奇数%d个",x,y);
	return 0;
}   
