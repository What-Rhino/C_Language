#include<stdio.h>
int main()
{
	int a=0,b=0,c=0;//引入三个整数 
	printf("请输入三个整数\n");
	scanf("%d %d %d",&a,&b,&c);//输入三个整数 
	//表示三种计算 
	int X=a+b+c;
	long int Y=a*b*c;
	double Z=(a+b+c)/2.0;
	printf("X=%d\n Y=%d\n Z=%lf\n",X,Y,Z);//输出结果  
	return 0;
}
