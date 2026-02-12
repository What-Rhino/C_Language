#include<stdio.h>
int main()
{
	int month,day,year;
	printf("请输入一个需要判断的年 月 日\n");
	scanf("%d %d %d",&year,&month,&day);
	if(month>12&&month<0||day>31&&day<1)
	{
		printf("该日期无效");
	}
	else if(month==1||month==3||month==5||month==7||month==8||month==10||month==12)
	{
		if(day<32&&day>0)
		{
			printf("该日期合法");
		}
		else
		{
			printf("该日期不合法") ;
		} 
	}
	else if(month==2)
	{
		if(year%4==0&&year%100!=0) 
		{
			if(day<=29&&day>0)
			{
				printf("该日期合法"); 
			}
			else{
				printf("该日期不合法");
			}
		}
		if(year%4!=0){
		
		if(day<29&&day>0)
		{
			printf("该日期合法");
		}
		else
		{
			printf("该日期不合法"); 
		}
	}
	 } 
	 else
	 {
	 	if(day>0&&day<31)
	 	{
	 		printf("该日期合法");
		 }
		 else
		 {
		 	printf("该日期不合法"); 
		 }
	 }
	return 0;
 } 
