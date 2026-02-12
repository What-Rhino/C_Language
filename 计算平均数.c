#include<stdio.h>
int main()
{
	int number;
	int sum=0;
	int count=0;
	printf("请输入要计算的数字");
	scanf("%d",&number);
	while(number!=-1){
		sum+=number;
		count++;
		printf("请继续输入(输入-1时停止计算)");
		scanf("%d",&number); 
	} 
	printf("%f",1.0*sum/count);
	return 0;
}
