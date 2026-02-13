#include<stdio.h>
int main()
{
	int M,N;
	printf("请输入人数与课目数:\n");
	scanf("%d %d",&N,&M);
	int i,j,num[M],sumnum[N];
	float score[N][M],weighted[M],sum[M],t;
	char name[N][20],subject[M][6];
	for(i=0;i<N;i++)
	{
		sumnum[i]=0;//初始化每为同学的总学分数 
	}
	printf("请输入名字:\n");
	for(i=0;i<N;i++)
	{
		scanf("%s",&name[i]);
	}
	printf("请输入学科名及所占学分:\n");
	for(i=0;i<M;i++)
	{
		scanf("%s",&subject[i]);
		scanf("%d",&num[i]); 
	}
	
	printf("请输入各科成绩\n");
	for(i=0;i<N;i++)
	{
		for(j=0;j<M;j++)
		{
			scanf("%f",&score[i][j]);
		}
	} 
	for(i=0;i<M;i++)
	{
		for(j=0;j<N;j++)
		{
			sum[i]+=score[j][i];//每科的总成绩 
		}
	}
	for(i=0;i<N;i++)
	{
		for(j=0;j<M;j++)
		{
			t=num[j];
			sumnum[i]+=num[j];//总学分 
		}
		for(j=0;j<M;j++)
		{
			weighted[i]+=score[i][j]*(t/sumnum[i]);//计算并存储加权分 
		}
	}

	printf("        ");
	for(i=0;i<M;i++)
	{
		printf("%6s ",subject[i]);//科目 
	}
		printf("   加权平均分\n"); 
	for(i=0;i<N;i++)
	{
		printf("%-6s",name[i]);
		for(j=0;j<M;j++)
		{
			printf(" %6.2f  ",score[i][j]);//输出每科分数 
		}
		printf(" %6.2f  ",weighted[i]);//输出加权分数 
		printf("\n");
	}
	printf("学分:     "); 
	for(i=0;i<M;i++)
	{
		printf("%-8d",num[i]);//输出不同科目所占学分 
		
	}
	printf("\n平均成绩:");
	for(i=0;i<M;i++)
	{
		printf("%-4.2f    ",sum[i]/N);//输出每科的平均分 
	} 
	return 0;
}
