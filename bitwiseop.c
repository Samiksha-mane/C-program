#include<stdio.h>
int main()
{
	int no,dig,tot=0;
	printf("\nEnter 3 digit no:");
	scanf("%d",&no);
	dig=no%10;
	tot=tot+dig;
	no/=10;
	dig=no%10;
	tot+=dig;
	no/=10;
	dig=no%10;
	tot+=dig;
	no/=10;
	printf("\nDigit sum:%d",tot);
	return;
}
