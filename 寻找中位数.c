#include<stdio.h>
int main()
{
	int n,i,j;
	printf("输入数列长度\n");//定义数组 
	scanf("%d",&n);
	double num[n],t=0.0;
	printf("请输入%d个数据",n);//输入数据 
	for(i=0;i<n;i++)
	{
		scanf("%lf",&num[i]);
	} 
	for(i=1;i<n;i++)//进行升序排序 
	{
		t=num[i]; 
		if(num[i]<num[i-1])
		{
			for(j=i-1;j>=0&&num[j]>t;j--)
			{
				num[j+1]=num[j]; 
				num[j]=t;
			}
		}
	}
	printf("降序排列为：\n");
	for(i=n-1;i>=0;i--)//对升序排序进行倒序输出 
	{
		printf("%.2lf ",num[i]);
	}
	if(n%2==1)//如果数字个数为奇数 
	{
		printf("%中位数为：%.2lf",num[(n-1)/2]);
	}
	else//如果数字位个为偶数 
	{
			printf("中位数为：%.2lf",((num[n/2]+num[n/2-1]))/2);
	}
	return 0; 
}
