#include<stdio.h>
int main()
{
	int x;
	int i=0;
	int const number=10;
	int count[number];

	for(i=0;i<number;i++)
	{
		count[i]=0;
	
	}
	printf("请输入0~9之间的数字");
	scanf("%d",&x);
	while(x!=-1)
	{
		if(x>=0&&x<=9)
		{
			count[x]++;
			scanf("%d",&x) ;
		}
		
	
	}
	for(i=0;i<number;i++)
	{
		printf("%d出现了%d次\n",i,count[i]);
	 } 
	return 0;
	
 } 
