# include <stdio.h>
int main ()
{
	int num ,i ,t1=0,t2=1;
	int nxtterm= t1+t2;
	printf("Enter a number:");
	scanf("%d",&num);
	printf("Fibonacci series upto %d th term is :%d,%d,",num,t1,t2);
	
	for (i=1;i<=num;i++)
	{
		printf("%d,",nxtterm);
		t1=t2;
		t2=nxtterm;
		nxtterm=t1+t2;
	}
	return 0;
}
