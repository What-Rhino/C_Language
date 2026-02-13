#include<stdio.h>
#include<string.h>
int main()
{
	int i,len,word=0,letter;
	char a[100];
	printf("input（需要输入标点符号）:\n");
	gets(a);
	len=strlen(a);
	for(i=0;i<len+1;i++)
	{//如果出现分隔符，单词数+1 
		if(a[i]==' '||a[i]=='\t'||a[i]=='\n'||a[i]==40||a[i]==41||a[i]==44||a[i]==46||a[i]==58||a[i]==34||a[i]==63)
		{
			word++;
		}
		if(a[i]>=65&&a[i]<=90||a[i]>=97&&a[i]<=122)
		{
			letter++;//如果出现大小英文字符，则字母数letter+1 
		}
	}
	printf("单词数：%d\n字母字符数：%d",word,letter);
	return 0;
}
