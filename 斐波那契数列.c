#include<stdio.h>
#define N 10
void fib(int b[],int n)
{
	int i;
	for(i=2;i<n;i++)
	{
			b[i]=b[i-1]+b[i-2];
	}
}
int main()
{
	int a[N]={1,1},i;
	fib(a,N);
	for(i=0;i<N;i++)
	{
		printf("fib(%d)=%d \n",i+1,a[i]);
	}
	return 0;
}
