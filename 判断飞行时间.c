#include<stdio.h>
int main()
{
	int i;
	printf("请输入是否为隔天或当天，当天请输入1,隔天请输入2\n");
	scanf("%d",&i);
	int a,b,c,d,e,f;
	
	printf("请输入起飞时间");
	scanf("%d:%d",&a,&b);
	printf("请输入降落时间");
	scanf("%d:%d",&c,&d); 
	if(i==1)
	{
	e=((c*60+d)-(a*60+b))/60;
	f=((c*60+d)-(a*60+b))%60;
	} 
	else if(i==2)
	{
		e=(24*60-(a*60+b))/60+c;
		f=(24*60-(a*60+b))%60+d;
	}
	
	printf("飞行时间%d:%d",e,f);
	
	return 0;
 } 
