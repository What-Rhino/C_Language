#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	int i,a,b,c,answer;
	int score=0;
	for(i=1;i<=10;i++)
	{
		srand(time(0));
		a=rand()%10000+1;
		b=rand()%10000+1;
		c=rand()%2+1;
		switch(c)
		{
			case 1:
				printf("%d+%d=",a,b);
				scanf("%d",&answer);
				if(answer==a+b)
				{
					printf("right\n");
					score+=1;
				}
				else
				{
					printf("wrong\n");
					score-=1;
					break;
				}
			case 2:
				printf("%d-%d=",a,b);
				scanf("%d",&answer);
				if(answer==a-b)
				{
					printf("right");
					score+=1;
				}
				else
				{
					printf("wrong");
					score-=1;
					break;
				}
			case 3:
			printf("%d*%d=",a,b);
			scanf("%d",&answer);
			if(answer==a*b)
			{
				printf("right");
				score+=1;
			}
			else
			{
				printf("wrong");
				score-=1;
				break;
			}
			case 4:
				printf("%d/%d=",a,b);
				scanf("%d",&answer);
				if(answer==a/b)
				{
					printf("right");
					score+=1;
				}
				else
				{
					printf("wrong");
					score-=1;
					break;
				}
			 
		}
		}
		printf("your score is:%d",score);	
		return 0;
 } 
