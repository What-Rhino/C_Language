#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	int i,t;
	int num1[20];
	int num2[10]={0}; //初始第二个去重后的数组每个都是零 
	srand(time(0));
	printf("原始数组：");
	for(i=0;i<20;i++)
	{
		num1[i]=rand()%9;//产生随机数并记录 
		printf("%d ",num1[i]);
	}
	printf("\n");
	for(i=0;i<20;i++)
	{
		t=num1[i]; //出现一次该数，就在第二个数组对应的位置+1 
		num2[t]++;
	}
	printf("去重后的数据为：\n"); 
	for(t=0;t<10;t++)
	{
		if(num2[t]==1)//只输出出现一次的数字 
		{
			printf("%d ",t);
		}
	}
	return 0;
 } 
