#include<stdio.h>
#define M 5
#define N 6
int main()
{
	int i,j,k,x,ret;
	int a[M][N]; 
	for(i=0;i<M*N;i++)
	{
		a[i/N][i%N]=i;
	 } 
	 for(i=0;i<M;i++)//展示数组 
	 {
	 	for(j=0;j<N;j++)
	 	{
	 		printf("%4d ",a[i][j]);
		 }
		 putchar('\n');
	 }
	 for(i=0;i<M;i++)
	 {
	 	k=0;
	 	for(j=1;j<N;j++)
	 	{
	 		if(a[i][k]<a[i][j])
	 		{
	 			k=j;//求出每行中最大元素 
			 }
		 }
		for(x=0;x<M;x++)
		{
			 ret=1;
			if(a[x][k]<a[i][k])	//判断是否为每列中最小元素 
			{	
				ret=0;
				break;
			}
		}
		 if(ret)
		 {
		 	printf("%d a[%d][%d]是二维数组的鞍点\n",a[i][k],i,k);
		 }
	 }
	 return 0;
}
