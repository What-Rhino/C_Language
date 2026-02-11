#include<stdio.h>
#define Pi 3.14//定义圆周率的取值 
int main()
{
float d,h;//引入底面直径和高 
printf("请依次输入圆柱体的底面直径和高\n");
scanf("%f %f",&d,&h);
//分别计算底面周长、表面积及体积 
float C=Pi*d;
float S=2*Pi*d/2*d/2+Pi*d*h;
float V=Pi*d/2*d/2*h;
printf("圆柱的底面周长=%f\n 表面积=%f\n 体积=%f\n",C,S,V);//输出数值 
return 0;


}
