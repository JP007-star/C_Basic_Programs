#	include <stdio.h>
int main()
{
	int num;
	printf("Enter a number:");
	scanf("%d",&num);
	if (num%2==0)
	printf("The given number  %d is: EVEN",num);
	else
	printf("The given number  %d is: ODD",num);
	return 0;	
}
