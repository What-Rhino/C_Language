#include<stdio.h>
int main()
{
	double sum=0;
	int x;
	int count;
	int i1=0;
	int i2=0;
	printf("请输入计算的数字数量：");
	scanf("%d",&count);
	int number[count];
	if(count>0)
	{
		printf("请输入数字"); 
		do{
			scanf("%d",&x);
			number[i1]=x;
			i1++;
			sum+=x;
		}while(i1<count);
	} 	
		printf("平均数为%f",sum/count);
		printf("\n");
	 	for(i2=0;i2<count;i2++)
			{
			if(number[i2]>(sum/count))
			{
			printf("大于平均数的数字为%d\n",number[i2]);
			}
			}
	 return 0;
}
