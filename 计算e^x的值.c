#include<stdio.h>
#include<math.h>
int main()
{
	int x;
	int i=1;
	double n=1.0;
	double sum=1.0;
	printf("input\n");
	scanf("%d",&x);
	while(n>=1e-6)
	{
		n=n*x/i;
		sum+=n;
		i++;
	}
	printf("e的x次幂=%.6lf\n",sum);
	double e=exp(x);
	printf("e的x次幂=%lf",e);
	 return 0;
}
