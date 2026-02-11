#include<stdio.h>
/*计算两个整数的和*/
int add(int i1,int i2)
{
	int i3;
	i3=i1+i2;
	return i3;
}
int main()
{
	int i4=1;
	int i5=2;
	int i6=add(i4,i5);
	printf("%d",i6);
	return 0;
}