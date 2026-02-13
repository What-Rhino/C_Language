#include<stdio.h>
int main()
{
	int x;
	int num[10]; 
	printf("请输入一个十位以内的正整数"); 
	scanf("%d",&x);
	int digit;
	int ret=0;
	int i=0;
	while(x>0){
	digit=x%10;
	num[i]=digit;
	ret+=digit;
	x/=10;
	printf("%d",num[i]);
	i++;
	
}
printf("各个位数和为%d",ret);
return 0;
 } 
