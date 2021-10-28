# include <stdio.h>
int main()
{
	int num,digit,sum=0,temp;
	printf("Enter a number : ");
	scanf("%d",&num);
	
	temp=num;
	while(num>0)
	{
		digit=num%10;
		sum=sum+digit;
		num/=10;
	}
printf("The sum of digits of number %d is :%d",temp,sum);
return 0;
}
