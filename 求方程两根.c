#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c;
	float root1,root2,
	disc,p,q;
	printf("请输入方程系数");
	scanf("%f %f %f",&a,&b,&c);
	 if(a!=0){
	disc=b*b-4*a*c;
	p=-b/(2*a);
	q=sqrt(disc)/(2*a);
	if(disc>0){
		root1=p+q;
		root2=p-q;
		printf("两根分别为%f %f",root1,root2);
	}
	else if(disc==0){
		root1= p+q; 
	    printf("两根相等：%f",root1);
	}
	else{
		printf("该方程没有实根"); 
	}
 	}
 	else{
 		root1=-c/b;
 		printf("该方程为一次方程且根为：%f",root1);
	 }
	return 0;
}
