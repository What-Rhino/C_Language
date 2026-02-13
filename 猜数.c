#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	srand(time(0));
	int number=rand()%100+1;
	int count=0;
	int a=0,b;
	printf("我已经想好了一个1到100之间的数。\n"); 
	while(a!=number)
	{
		if(count>=7)
		{
		printf("you lose");
		break;
		}
		printf("请猜一猜这个1到100之间的数,当输入-1时停止游戏");
		scanf("%d",&a);
		count++;
		if(a==-1)
		{
			printf("是否继续进行游戏（是：请输入-2，否：请输入-1)\n");
			scanf("%d",&b);
			if(b==-1)
			{printf("游戏结束");
			break; 
			}
			if(b==-2)
			{
				printf("请继续输入"); 
				scanf("%d",&a);
			}
		 } 
		if(a>number){
			printf("你猜的数大了"); 
		} else if(a<number){
			printf("你猜的数小了"); 
		}
			if(a==number)
		{
			printf("you win");
		}
	} 

	return 0;
}
