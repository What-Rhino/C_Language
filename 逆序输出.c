#include<stdio.h>
int main()
{
	int x;
	
	printf("请输入一个不超过10000的正整数");
	scanf("%d",&x);
	int digit;
	if(x>=0&&x<=10000){
		while(x>0){
			digit=x%10;
			x/=10; 
			printf("%d",digit);
		}
	}
	else{
		printf("请重新输入符合条件的数"); 
	}
	return 0;
	

	
}
