#include<stdio.h>
int main()
{
	int num,square,temp,flag=0;
	printf("Enter a number:");
	scanf("%d",&num);
	temp=num;
	square=num*num;
	while(num>0)
	{
		if(num%10!=square%10)
		{ 
		  flag=1;
		  break;
		}
		num/=10;
		square/=10;
	}
	if(flag==0)
	printf("The given number %d is a automorphic number",temp);
	else
	printf("The given number %d is not a automorphic number",temp);
    return 0;	
}
