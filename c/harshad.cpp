# include <stdio.h>
int main()
{
	int num,temp,digit,sum=0,rem;
	printf("Enter a number:");
	scanf("%d",&num);
	
	temp=num;
	while(temp!=0)
	{
		digit=temp%10;
		sum=sum+digit;
		temp/=10;
	}
	rem=num%sum;
	
	if(rem==0)
	printf("The given number %d is a harshad number",num);
	else
	printf("The given number %d is not a harshad number",num);
}
