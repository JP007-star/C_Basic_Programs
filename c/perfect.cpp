# include <stdio.h>
int main()
{
	int num,i,sum=0;
	printf("Enter a number:");
	scanf("%d",&num);

    for(i=1;i<num;i++)
    {
    	if(num%i==0)
    	{
    		sum=sum+i;
		}
	}
	if(num==sum)
	printf("The given number %d is a perfect number",num);
	else
	printf("The given number %d is not a perfect number",num);
	return 0;
}
