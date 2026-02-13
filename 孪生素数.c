#include<stdio.h>
int fact (int n)
{
	int i;
	for(i=2;i<n;i++)
	{
		if(n%i==0)
		{
			return 0;
		}
		else 
		return 1;
	}
		
}
int main()
{
	int j,c,d,n,total=0;
	printf("please input c,d(c>2):\n");
	scanf("%d,%d",&c,&d);
	for(j=c;j<d;j++) 
	{
	if(fact(j)==1&&fact(j+2)==1)
	{
		printf("%ld,%ldÊÇÂÏÉúËØÊý\n",j,j+2);
		total++;
	}
	
	}
	printf("total=%d\n",total);
	return 0;
}
 
