#include<stdio.h>
#include<string.h>//引入字符串库函数 
int f(char a[],char b[])//构建比较字符串长度的函数 
{
	int flag=0,len1,len2;
	len1=strlen(a);
	len2=strlen(b);
	if(len1>=len2)
	{
		flag=1; //定义判断值，如果为一，则第一个字符串长度大于第二个 
	}
	return flag;
	
}
int main()
{
	int flag;
	char a[10],b[10],c[10];
	printf("input\n");
	gets(a);
	gets(b);
	gets(c);
	flag=f(a,b);
	if(flag==1)//进行比较 
	{
		 flag=f(a,c);
		if(flag==1)
		{
			puts(a);
		}
		else
		{
			puts(c);
		}
	}
	else
	{
		flag=f(b,c);
		if(flag==1)
		{
			puts(b);
		}
		else
		{
			puts(c);
		}
	}
	
	return 0;
}
