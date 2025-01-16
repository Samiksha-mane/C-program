#include<stdio.h>
int main()
{
	int i=1,os=0,es=0,x;
	while(i<=10)
	{
		printf("\n Enter Number :");
		scanf("%d",&x);
		if(x%2==1)
		os+=x;
		else
		es+=x;
		i++;
	}
	printf("\n odd datasum : %d",os);
	printf("\n Even data sum : %d",es);
	return 0;
}
