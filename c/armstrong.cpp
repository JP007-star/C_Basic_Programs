# include<stdio.h>
int main()
{
	int  num,temp,digit,sum;
	printf("Enter a number : ");
	scanf("%d",&num);
	
	temp=num;
	while(num>0){
		digit=num%10;
		digit=digit*digit*digit;
		sum=sum+digit;
		num/=10;
	}
	if (temp==sum)
	printf("The given number %d is a armstrong number :",temp);
	else
	printf("The given number %d is not a armstrong number :",temp);
	return 0;
}
