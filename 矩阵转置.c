#include<stdio.h>
#define N 3
int main()
{
	int i,j,arr[N][N]={{1,2,3},{4,5,6},{7,8,9}};
	printf("原矩阵为：\n");//展示原数组 
	for(i=0;i<N;i++)
	{
		for(j=0;j<N;j++)
		{
			printf("%5d",arr[i][j]);
		}
		printf("\n"); 
	}
	printf("转置后为：\n");
	for(i=0;i<N;i++)
	{
		for(j=0;j<N;j++)
		{
			printf("%5d",arr[j][i]);//对应坐标调换 
		}
		printf("\n");
	}
	return 0;
 } 
