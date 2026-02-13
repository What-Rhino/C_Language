#include<stdio.h>
#include<string.h>
int main()
{
	char str[5][20]={0};
	char t[20]={0};
	int i,j;
	for(i=0;i<5;i++)
	{
		printf("请输入第%d个字符串\n",i+1);
		gets(str[i]);
	}
	for(i=0;i<4;i++)
	{
		for(j=0;j<4-i;j++)
		{
			if(strcmp(str[j],str[j+1])>0)
			{
				strcpy(t,str[j+1]);
				strcpy(str[j+1],str[j]);
				strcpy(str[j],t);
			}
		}
	}
	printf("排序后的结果为：\n");
	for(i=0;i<5;i++)
	{
		puts(str[i]);
	}
	return 0;
}
