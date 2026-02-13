#include<stdio.h>
int main()
{
	int cocks,hens,chickens;
	for(cocks=1;cocks<20;cocks++)
	{
		for(hens=1;hens<33;hens++)
		{
			chickens=100-hens-cocks;
			if(cocks+hens+chickens==100&&chickens%3==0)
			{
				printf("cocks:%d hens:%d chickens:%d\n",cocks,hens,chickens);
			}
		}
	}
	return 0;
}
