#include<stdio.h>
int main()
{
	int x,i=2;
	printf("\n Enter a number :");
	scanf("%d",&x);
	while(i<x/2)
	{
		if(x%i==0)
		break;
		i++;
	}
	if(i==x/2)
		printf("\n Prime number");
	else
		printf("\n Not prime number");
	return 0;
}
