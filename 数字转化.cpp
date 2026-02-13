#include<stdio.h>
int main()
{
	int a[3],i,j,num,numi,numq,temp;
	printf("请输入一位三位正整数:\n");
	scanf("%d",&num);
	numq=num;
	for(i=0;i<3;i++)
	{
		a[i]=num%10;
		num/=10;
	}
	for(i=0;i<2;i++)
	for(j=0;j<2-i;j++)
	if(a[j]<a[j+1])
	{
		temp=a[j];
		a[j]=a[j+1];
		a[j+1]=temp;
	}
	else 
	continue;
	numi=a[0]*100+a[1]*10+a[2];
	if(numi%6==0)
		numi=numi-numq;
	else if(numi%2==0&&numi%3!=0)
	numi/=2;
	else if(numi%3==0&&numi%2!=0)
	numi/=3;
	else
	numi=numi;
	printf("输出的数为:%d",numi);
	return 0; 
}
