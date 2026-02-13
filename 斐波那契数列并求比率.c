#include<stdio.h>
int main()
{
	int n,i;
	double rate=0.0;
	long int fib[50];
	fib[1]=1;
	fib[2]=1;
	printf("请输入要求的项数");
	scanf("%d",&n); 
	for(i=3;i<n;i++)
	{
	   fib[i]=fib[i-1]+fib[i-2];
	   rate=1.0*(fib[i-2])/(fib[i-1]);
	   printf("%ld %ld %lf\n",fib[i-2],fib[i-1],rate);
	}
	return 0;
}
