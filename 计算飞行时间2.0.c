#include<stdio.h>
int main()
{
	int H1,H2,M1,M2,H3,M3;
	int G1;
	int G2;
	printf("请输入起飞日期及时间(日期 时：分)\n");
	scanf("%d %d:%d",&G1,&H1,&M1);
	getchar(); 
	printf("请输入起飞日期及时间(日期 时：分)\n");
	scanf("%d %d:%d",&G2,&H2,&M2);
	int D,X,Y,Z;
	D=G2-G1;
	X = D*24*60;
	Y = H2*60;
	Z = H1*60;
		H3=((X+Y+M2)-(Z+M1))/60;
		M3=((X+Y)-(Z+M1))%60;
		printf("飞行时间为 %d:%d",H3,M3);
	  
	 return 0;
}
