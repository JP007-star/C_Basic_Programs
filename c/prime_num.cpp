# include <stdio.h>
int main()
{
	int num,i,div=0;
	
	printf("Enter a number:");
	scanf("%d",&num);
	
	for (i=1;i<=num;i++)
	{
		if(num%i==0)	
		{
			div++;
		}	
	}
	if (div==2)
	{
		printf("The given number %d is a prime number",num);
	}
	else
	printf("The given number %d is not a prime number",num);
	return 0;
}
