#include<stdio.h>
int main()
{
	int i,j,n,m;
	double power=1;
	printf("请输入底数和指数\n");
	scanf("%d %d",&m,&n);
	if(n>0)
	{
		for(i=1;i<=n;i++)
		{
			power*=m; 
		}
	 } 
	 else if(n==0)
	 {
	 	power=1;
	 }
	 else
	 {
	 	for(j=1;j<=-n;j++)
	 	{
		 power/=m;
		}
	 }
	printf("%d的%d次幂为%lf",m,n,power);
	return 0;
}
