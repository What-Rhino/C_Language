#include<stdio.h>
int main()
{
	int arr1[]={1,1,3,5,7,9};
	int arr2[]={2,4,6,8,10,10};
	int arr3[100];
	int i,j,temp,a,b,c;
	a=(sizeof(arr1)/4);
	b=(sizeof(arr2)/4);
	c=a+b;
	for(i=0;i<a;i++)//先将两个数组连接 
	{
		arr3[i]=arr1[i];
	}
	for(i=0;i<b;i++)
	{
		arr3[i+a]=arr2[i];
	}
	for(i=0;i<(c-1);i++)
	{
		for(j=0;j<c-i;j++)
		{
			if(arr3[j]>arr3[j+1])//对合并成的新数组排序 
			{
				temp=arr3[j];
				arr3[j]=arr3[j+1];
				arr3[j+1]=temp;
			}
		}
	}
	printf("排序后为：\n");
	for(i=0;i<c;i++)
	{
		printf("%d ",arr3[i]);
	}
	return 0;
}
