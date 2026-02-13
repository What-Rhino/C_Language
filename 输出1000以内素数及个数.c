#include<stdio.h>
int main()
{
	const int N=1000;
	int arr[N];
	int i,j,cnt=0;
	for(i=2;i<N;i++)
	{
		arr[i]=1;//默认都为素数 
	}
	 for(j=2;j<N;j++)
	 {
	 	if(arr[N]) 
	 	{
	 		for(i=2;i*j<N;i++)
	 		{
	 			arr[i*j]=0;//依次将素数的倍数筛去 
			 }
		 }
		 
	}
	for(i=2;i<N;i++)
	{
		if(arr[i])
		{
			printf("%d\n",i);//打印标记为1的即为素数 
			cnt++;
		}
	}
	printf("共%d个",cnt);
	return 0;
}
