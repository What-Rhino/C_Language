#include<stdio.h>
int main()
{
	int x;
	printf("请输入要进行求逆的整数"); 
	scanf("%d",&x);
	int digit;
	int ret=0;
	while(x>0){
	digit=x%10;
	printf("%d",digit); 
	//ret=ret*10+digit;
	x/=10;
	
}//printf("%d",ret);
return 0;
 } 
