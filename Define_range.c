#include<stdio.h>
int main()
{
	int x;
	printf("\n Enter no :");
	scanf("%d",&x);
	if(x<0)
	printf("\n Below 0");
	else
	{
		if(x>100)
		printf("\nAbove 100");
		else
		printf("\nWithin range 0-100");
	}
	return 0;
}
