#include<stdio.h>
int main()
{
	double sum=0;
	int x,c=0,m=0;
	int count;
	int i1=0;
	int i2=0;
	int number[100]; 
		printf("请输入数字输入-1时停止"); 
		for(i1=0;i1<100;i1++)
		{
			scanf("%d",&x);
			if(x==-1)      //将数字存入数组，-1时停止 
			break;
			number[i1]=x;
			sum+=number[i1];
			m++;
		}
		printf("平均数为%f",sum/m);
		printf("\n");
	 	for(i2=0;i2<m;i2++)
			{
			if(number[i2]>(sum/m))
				c++; 
			}
			printf("大于平均数的个数为：%d",c);
	 return 0;
}
