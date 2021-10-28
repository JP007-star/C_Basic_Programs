#include <stdio.h>
int main()
{
	int num;
	printf("Enter a Number: ");
	scanf("%d",&num);
	if (num<=0)
	{
		if(num==0)
		printf("The Number is Zero");
		else
		printf("The Number %d is negative",num);
	}
	else
		printf("The Number %d is positive",num);
		
	return 0;
	
}
