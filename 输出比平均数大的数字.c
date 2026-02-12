#include<stdio.h>
int main()
{
	int x;
	int count=0;
	double 	sum;
	int number[100];
	printf("请输入所有数字"); 
	scanf("%d",&x);
	while(x!=-1)
	{
		number[count]=x;
		sum+=x;
		count++;	
		scanf("%d",&x);
	}
	//if(count>0)
	//{
		printf("%lf\n",sum/count);
		int i;
		for(i=0;i<count;i++)
		{
			if(number[i]>sum/count)
			{
				printf("大于平均数的数字为%d\n",number[i]);
			}
		}
//	}
	
	return 0;
} 
