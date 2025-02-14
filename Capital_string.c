#include<stdio.h>
int main()
{
	int cnt=1,i=0;
	char a[100];
	printf("\n Enter a string :");
	gets(a);
	while(a[i]!='\0')
	{
		if(cnt%2==1)
		{
			if(a[i]>=97&&a[i]<=122)
			a[i]=a[i]-32;
		}
		else
		{
			if(a[i]>=65&&a[i]<=90)
			a[i]=a[i]+32;
		}
		if(a[i]==32)
		cnt++;
		i++;
	}
	puts(a);
}
