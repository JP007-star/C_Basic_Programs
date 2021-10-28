# include <stdio.h>
int main()
{
	int num,i,temp,sum=0;
	printf("Enter a number:");
	scanf("%d",&num);
	
	temp=num;
	for(i=1;i<temp;i++){
		if(temp%i==0)
		{
		  sum=sum+i;
		}
	}
    if(sum>num)
    printf("The given number %d is a abundant number",num);
    else
    printf("The given number %d is not a abundant number",num);
}
