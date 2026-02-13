#include<stdio.h>
int max(int arr[],int len)
{
	int i;
	int maxid=0;//将第一个数作为基准 
	for(i=0;i<len;i++)
	{
		if(arr[i]>arr[maxid])
		maxid=i;//遍历数组将剩余的最大的数下标赋值给标记值maxid 
	}
	return maxid;
}
int main()
{
	int i,j,t;
	int arr[]={1,3,6,5,2,4,8,9,7,0};
	int len=sizeof(arr)/sizeof(arr[0]);
	for(i=len-1;i>0;i--)
	{
	int maxid=max(arr,i+1);
	t=arr[maxid];//将maxid所指的数（也就是最大数）放在数组最后面 
	arr[maxid]=arr[i];
	arr[i]=t;
	}
	for(i=0;i<len;i++)//遍历输出 
	{
		printf("%d ",arr[i]);
	}
	return 0;
}
