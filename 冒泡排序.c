#include<stdio.h>
int main()
{	int i,j,cnt,temp,x,m;
	int n[10]; 
	printf("请输入十个正整数"); 
	for(cnt=0;cnt<10;cnt++)
	{
		scanf("%d",&x);
	    n[cnt]=x;
	}
	for(i=0;i<9;i++)
	{
		for(j=0;j<=9-i;j++)
		{
			if(n[j]>n[j+1])
			{
				temp=n[j];
				n[j]=n[j+1];
				n[j+1]=temp;
				
			}
		}
	}
	printf("排序后为:"); 
	for(m=0;m<10;m++)
	{
		printf("%d ",n[m]);	 } 
	 return 0;
 } 
