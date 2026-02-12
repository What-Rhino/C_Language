#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c,max,mid,min;
	double sin,cos;
	printf("请输入三角形三边");
	scanf("%f %f %f",&a,&b,&c);
	if(a+b<=c||a+c<=b||b+c<=a){
		printf("不能组成三角形，请重新输入");
		
	}
	else {
		if(a>b)
		{if(a>c)
		{max=a;
		mid=b;
		min=c;}
		else{
		max=c;	
		mid=a;
		min=b;
	    }
		}
		else {
			if(b>c)
	        {
			max=b;
			mid=a;
			min=c;}
			else{
			max=c;
			mid=b;
			min=a;}
		}
		printf("%f %f %f",max,mid,min);
	    cos=(mid*mid+min*min-max*max)/(2*mid*min);
	    sin=sqrt(1-cos*cos);
	    printf("该三角形的最大角正弦值为：%lf %lf",sin,cos);
		if(cos<0)
		{
			printf("该三角形为钝角三角形");
		} 
		else if(cos==0)
		{
			printf("该三角形为直角三角形");
		}
		else
		{
			printf("该三角形为锐角三角形");
		}
    
}
return 0;
}

