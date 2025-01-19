#include<stdio.h>
int main()
{
	int i,max,num1,num2;
	printf("\n Enter  two numbers :");
	scanf("%d %d",&num1,&num2);
	max=(num1>num2)?num1:num2;
	for(i=max;(1);i++)
	{
		if(i%num1==0 && i%num2==0)
		break;
	}
	printf("\n LCM =%d",i);
	return 0;
}
