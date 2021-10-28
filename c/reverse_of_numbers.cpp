#include <stdio.h>
int main()
{
	int num,digit,temp,rev=0;
	printf("Enter the Numbers to be reversed :");
	scanf("%d",&num);
	
	temp=num;
	while(num>0)
	{
		digit=num%10;
		rev=rev*10+digit;
		num/=10;	
	}
	printf("The revrsed number of %d is:%d",temp,rev);
}
