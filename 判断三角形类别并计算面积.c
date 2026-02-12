#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c;
	float s,p;
	printf("请输入三角形三边长");
	scanf("%f %f %f",&a,&b,&c);
	p=(a+b+c)/2;
    if(a==b||a==c||b==c)
	{
		if(a==b&&b==c)
		{
			printf("该三角形为等边三角形");	
		}
		else
		{
			printf("该三角形为等腰三角形");
		}	
	} 
	else
	{
		printf("该三角形为一般三角形");
	}
	s=sqrt (p*(p-a)*(p-b)*(p-c));
	printf("该三角形面积为%f",s);
	return 0;
}
