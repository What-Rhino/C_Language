#include<stdio.h>
int f(int year,int month,int day)//判断日期的有效性 
{
	int flag=1;//默认日期有效返回值为1 
	if(month>12&&month<0||day>31&&day<1)
	{
		flag=0; 
	}
	else if(month==1||month==3||month==5||month==7||month==8||month==10||month==12)//判断大月 
	{
		if(day<32&&day>0)
		{
			flag=1;
		}
		else
		{
			flag=0;
		} 
	}
	else if(month==2)//判断2月 
	{
		if(year%4==0&&year%100!=0//判断平闰年 
		{
			if(day<=29&&day>0)
			{
				flag=1; 
			}
			else{
				flag=0;
			}
		}
		if(year%4!=0)
		{
			if(day<29&&day>0)
			{
				flag=1;
			}
			else
			{
				flag=0;
			}
		}
	 } 
	 else//判断小月 
	 {
	 	if(day>0&&day<31)
	 	{
	 		flag=1;
		 }
		 else
		 {
		 	flag=0; 
		 }
	 }
	 return flag;
} 
int main()
{
	int year,month,day,flag,sum=0;
	printf("请输入年月日（输入格式如2023年8月25日：2023 8 25）\n");
	scanf("%d %d %d",&year,&month,&day);
	flag=f(year,month,day);
	if(flag==1)
	{
		switch(month)//记录在输入日期前几个月的总天数 
		{
			case 2:sum=31;break;
			case 3:sum=31+28;break;
			case 4:sum=31+28+31;break;
			case 5:sum=31+28+31+30;break;
			case 6:sum=31+28+31+30+31;break;
			case 7:sum=31+28+31+30+31+30;break;
			case 8:sum=31+28+31+30+31+30+31;break;
			case 9:sum=31+28+31+30+31+30+31+31;break;
			case 10:sum=31+28+31+30+31+30+31+31+30;break;
			case 11:sum=31+28+31+30+31+30+31+31+30+31;break;
			case 12:sum=31+28+31+30+31+30+31+31+30+31+30;break;
		}
		sum+=day;
		if(year%400==0||(year%4==0&&year%100!=0))//如果是闰年且日期在二月以后，天数+1 
		{
			if(month>2)
			{
				sum++;
			}	
		}
		printf("该日期为该年的第%d天\n",sum);
	}
	else
	printf("该日期无效！\n");//提示输入的日期无效 
	return 0;
}
