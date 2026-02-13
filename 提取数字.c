#include<stdio.h>
int main()
{
	char str[10];
	printf("input\n");
	gets(str);
	int i,j=0,num[10];
	for(i=0;i<10;i++)
	{
		if(str[i]>=48&&str[i]<=57)
		{
			num[j]=str[i]%48;//如果是数字字符就存入整型数组num 
			j++;
		}
	}
	
	for(i=0;i<j;i++)
	printf("%d",num[i]);
	return 0;
}
