# include <stdio.h>
int main()
{
	int num1,num2,i,temp,sum1=0,sum2=0;
	printf("Enter a first number:");
	scanf("%d",&num1);
	printf("Enter a second number:");
	scanf("%d",&num2);
	
	temp=num1;

	for(i=1;i<temp;i++){
		if(temp%i==0)
		{
		  sum1=sum1+i;
		}
	}

	temp=num2;

	for(i=1;i<temp;i++){
		if(temp%i==0)
		{
		  sum2=sum2+i;
		}
	}

    if((num1==sum1) && (num2==sum2))
    printf("The given numbers are a friendly numbers");
    else
    printf("The given numbers are not a friendly numbers");
}
