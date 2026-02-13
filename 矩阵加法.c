#include<stdio.h>
#define N 3
int main()
{
	int a[N][N],b[N][N],c[N][N],i,j;
	printf("输入3*3矩阵a中数字");//输入第一个矩阵 
	for(i=0;i<N;i++)
	{
		for(j=0;j<N;j++)
		{
			scanf("%d",&a[i][j]);
		}
		printf("\n");
	}
	printf("输入3*3矩阵b中数字");//输入第二个矩阵 
	for(i=0;i<N;i++)
	{
		for(j=0;j<N;j++)
		{
			scanf("%d",&b[i][j]);
			c[i][j]=a[i][j]+b[i][j];//对应位置相加并存储到一个新数组 
		}
		printf("\n");
	}
	printf("相加后:\n");
	for(i=0;i<N;i++)
	{
		for(j=0;j<N;j++)
		   {
		 		printf("%d ",c[i][j]);
		 	}
		printf("\n");
	}
	return 0;
}
