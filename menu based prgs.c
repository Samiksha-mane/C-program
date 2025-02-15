#include<stdio.h>
int main()
{
	int opt,no,tmp,i,res,flg=0;
	while(1)
	{
	printf("\n Menu\n 1.Enter No :\n2.odd even\n3.digit sum\n4.reverse no\n5.palindrome\n6.table\n7.prime\n8.Exit\noption :");
	scanf("%d",&opt);
	if(opt>7)
	break;
	switch(opt)
	{
		case 1:
			printf("\n Enter NO :");
			scanf("%d",&no);
			flg=1;
			default : 
			if(flg==0)
			{
				printf("\n Invalid Data :");
				continue;
			}
			switch(opt)
			{
				case 2:
					if(no%2==0)
					printf("\nEven No");
					else
					printf("\n)Odd No");
					break;
				case 6:
					printf("\n Table\n");
					for(i=1;i<=10;i++)
					printf("%4d",no*i);
					break;
				case 7:
					for(i=2;i<no;i++)
					{
					
						if(no%i==0)
						break;
					}
					if(i==no)
					printf("\n prime");
					else
					printf("\n not prime");
					break;
				case 3:
					res=0;
					tmp=no;
					while(tmp>0)
					{
						res+=(tmp%10);
						tmp/=10;
					}
					printf("\nDigit sum:%d",res);
					break;
				case 4:
				case 5:
					res=0;
					tmp=no;
					while(tmp>0)
					{
						res=res*10+(tmp%10);
						tmp/=10;
					}
					if(opt==4)
					printf("\nResverse no :%d",res);
					else
					{
						if(no==res)
						printf("\nPalindrome");
						else
						printf("\nNot palindrome");
						break;
					}
			}
	}
	}
}

