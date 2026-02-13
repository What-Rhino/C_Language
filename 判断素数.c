
#include<stdio.h>
int main()
{
	int x;
	printf("请输入要判断的非1正整数");
	scanf("%d",&x);
	int i;
	int isPrime=1;
	for(i=2;i<x;i++){
		if(x%i==0){
			isPrime=0;
			break;
		}
	} 
	if(isPrime==0){
		printf("该数不是素数\n");
	}
	else
	{printf("该数是素数\n"); 
	}
	return 0;
}
