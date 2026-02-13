#include<stdio.h>
int main()
{
	const int N=3;
	int i,j,t;
	int arr[N][N];
	for(i=0,j=N*N;i<j;i++)
	{
		arr[i/N][i%N]=i+1;
		//printf("%d",arr[i/N][i%N]);
	}
	for(i=0;i<N;i++)
	{
		for(j=0;j<i;j++)
		{
			t=arr[j][i];
		    arr[j][i]=arr[i][j];
		    arr[i][j]=t;
		}
	}
	for(i=0;i<N;i++)
	{
		for(j=0;j<N;j++)
		{
		printf("%d  ",arr[i][j]);
		}
		putchar('\n');
	}
	return 0;
}
