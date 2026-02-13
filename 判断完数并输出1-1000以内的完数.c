#include<stdio.h>
int isPerfectnum(int number) //定义验证完数的函数 
{
	int i,sum=0,flag=1;//默认都是完数返回值为1 
	for(i=1;i<number;i++)
		{
			if(number%i==0)
			{
				sum+=i;//计算因子和 
			}
				if(sum==number)//如果 因子和等于此书则返回1 
			{
				return flag;
			}
		}
		if(sum!=number)
		{
			flag=0;//如果因子和不等于该数则返回0 
			return flag;
		 } 
}
int main()
{
	int i,j,sum,number,flag;
	for(i=1;i<1000;i++)//输出1到1000内的完数 
	{
		sum=0;
		for(j=1;j<i;j++)
		{
			if(i%j==0)
			{
				sum+=j;
			}
		}
		if(sum==i)
		{
			printf("%d\n",i);
		}
	}
	printf("请输入要判断的数字\n");
	scanf("%d",&number);
	flag=isPerfectnum(number);//调用判断函数并将返回值赋给flag 
	printf("%d",flag);
	return 0; 
}



