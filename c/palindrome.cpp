#include <stdio.h>
int main ()
{
	int num,temp,digit,rev=0;
	printf("Enter the number: ");
	scanf("%d",&num);
	
	temp=num;
	while (num>0)
	{
		digit=num%10;
		rev=rev*10+digit;
		num/=10;
	}
	if (temp==rev)
	{
		printf("The given number %d is a palindrome",temp);
	}
	else
	printf("The given number %d is not a palindrome",temp);
	return 0;
}
