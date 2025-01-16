#include<stdio.h>
int main()
{
	int i=0,min,x;
	while(i<=10)
	{
		printf("\n Enter a no :");
		scanf("%d",&x);
		if(i==1)
		min = x;
		else
		{
			if(x<min)
			min=x;
		}
		i++;
	}
	printf("\n min no:%d",min);
	return 0;
}
