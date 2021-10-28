# include <stdio.h>
# include <math.h>
int main()
{
	int low,high,num,temp,rem,count=0;
	double result=0.0;
	
	printf("Enter range of nos:\n");
	scanf("%d\n%d",&low,&high);
	printf("The armstrong nos between the %d and %d are:",low,high);
	
	for (num=low+1;num<high;num++)
	{
		temp=num;
		// calculate  no of digits
		while (temp!=0)
		{
			temp/=10;
			count++;
		}
		temp=num;
		// calculate armstrong nos
		while(temp!=0)
		{
			rem=temp%10;
			result+=pow(rem,count);
			temp/=10;
		}
		if(result==num && count>1)
		{
			printf("%d ",num);
		}
		count=0;
		result=0;
	}
	return 0;
}
