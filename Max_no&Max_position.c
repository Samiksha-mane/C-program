#include<stdio.h>
int main()
{
	int x[10],i=0,xpos=0;
	for(i=0;i<10;i++)
	{
		printf("\n Enter NO :");
		scanf("%d",&x[i]);
	}
	for(i=0;i<10;i++)
	{
		if(x[i]>x[xpos])
		xpos=i;
	}
	printf("\n Max value :%d",x[xpos]);
	printf("\n Max position :%d",xpos);
	return 0;
}
