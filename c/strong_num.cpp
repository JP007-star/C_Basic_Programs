# include<stdio.h>
int main()
{
	int  num,temp,digit,sum,i,fact=1;
	printf("Enter a number : ");
	scanf("%d",&num);
	
	temp=num;
	while(num>0){
		digit=num%10;
		for(i=1;i<=digit;i++)
		{
		 fact=fact*i;
		}
		sum=sum+fact;
		num/=10;
		fact=1;
	}
	if (temp==sum)
	printf("The given number %d is a strong number :",temp);
	else
	printf("The given number %d is not a strong number :",temp);
	return 0;
}
