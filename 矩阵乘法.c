#include<stdio.h>
#define N 3
int main()
{
	int i,j,x,a[N][N],b[N][N],c[N][N];
	printf("请输入3*3矩阵a中数据：\n"); //输入第一个矩阵 
	for(i=0;i<N;i++)
	{
		for(j=0;j<N;j++)
		{
			scanf("%d",&a[i][j]);
		}
		printf("\n");
	}
	printf("请输入3*3矩阵b中数据：\n");//输入第二个矩阵 
	for(i=0;i<N;i++)
	{
		for(j=0;j<N;j++)
		{
			scanf("%d",&b[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<N;i++)
	{
		for(j=0;j<N;j++)
		{
			c[i][j]=a[i][j]*b[i][j];//对应位置相乘并存入第三个矩阵 
			printf("%d ",c[i][j]);
		}
		printf("\n");
	}
	return 0;
}

