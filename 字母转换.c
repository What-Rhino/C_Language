#include<stdio.h>
int main()
{
	char a,b;//引入两个符号型变量 
	printf("请输入一个大写字母：\n");
	a=getchar();//给a赋值 
	//分三类情况进行处理 
	if(a>='A'&&a<='Z')
	{
		b=a+32;
		printf("转换后的字母为： %c %d",b,b);
	}//输入的是大写字母并进行转换 
	else if(a>='a'&&a<='z')
	{
		putchar(a);
		printf("\n");
	}//输入的是小写字母直接输出 
	else
	{
		printf("输入的并非字母"); 
		}//输入的并非字母	提示错误 

	return 0;
}
