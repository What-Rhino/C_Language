#include<stdio.h>
#include<string.h>
#define N 10
void insertSort(char a[],int m)
{
	int i,j;
	char temp;
	for(i=1;i<m;i++)
	{
		temp=a[i];//临时存放 
		if(a[i]<a[i-1])
		{
			for(j=i-1;j>=0&&a[j]>temp;j--)
			{
				a[j+1]=a[j];//将大的排在后面 
				a[j]=temp;
			}
		}
	}
}
int insert(char a[],int n,int m,char value)
{
	int i,j,index;
	for(i=0;i<m;i++)
	{
		if(	a[i]>value)
		{
			index=i;//记录存放位置 
			for(j=m-1;j>=index;j--)
			{
				a[j+1]=a[j];//向后移动一位 
			}
			a[index]=value;
			break;
		}
	}
	if(value>a[m-1])//如果value大于该数组中的每个数 
	{
		a[m]=value;
		index=m;
	}
	return index;
}
int main()
{
	int index,i,m=0;
	char a[N]; 
	char value;
	printf("请输入字符\n");   
	gets(a);
	m=strlen(a);
	printf("请输入要插入的字符：\n");
	scanf("%c",&value);
	insertSort(a,m);
	puts(a);
	index=insert(a,N,m,value);
	puts(a);
	printf("插入位置%d\n",index+1);
	return 0;
}
