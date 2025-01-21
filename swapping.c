#include<stdio.h>
int main()
{
	int num1,num2,temp;
	printf("\n Enter two numbers : ");
	scanf("%d %d",&num1,&num2);
	temp=num1;
	num1=num2;
	num2=temp;
	printf("\n Afetr swapping :num1 = %d and num2 = %d ",num1,num2);
	return 0;
}
