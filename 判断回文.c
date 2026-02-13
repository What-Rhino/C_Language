#include<stdio.h>
#include<string.h>
int main()
{
	char a[50],b[50];
	int i,j,t,cnt,flag=1;
	printf("input\n");
	gets(a);
	int lena=strlen(a);
	for(i=0;i<lena+1;i++)
		if(a[i]>=32&&a[i]<=47||a[i]>=58&&a[i]<=64||a[i]>=91&&a[i]<=96||a[i]>=123&&a[i]<=127)
	{
		{
			for(j=i;j<=lena;j++)
			{
				a[j]=a[j+1];//将非数字或字母字符覆盖 
			}
			cnt++;
		}
	} 
	for(i=0;i<=lena-cnt;i++)
	{
		b[i]=a[i];//将数字或字母字符记录 
	} 
	int lenb=strlen(b);
	for(i=0;i<=lenb/2;i++)
	{
		if(b[i]!=b[lenb-1-i]&&b[i]+32!=b[lenb-1-i])//判断回文并排除大小写的干扰 
		{
			flag=0;
			break;
		}
	}
	if(flag==1)
	{
		printf("是回文");
	}
	if(flag==0)
	{
		printf("不是回文");
	}
	return 0;
}
