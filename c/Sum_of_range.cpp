# include <stdio.h>
int main()
{
	int firstnum,lastnum,i,sum=0;
	printf("Enter the range of number to find range:\n");
	scanf("%d\n%d",&firstnum,&lastnum);
	
	for(i=firstnum;i<=lastnum;i++)
	{
		sum=sum+i;
	}
	printf("Sum of numbers from %d to %d is:%d",firstnum,lastnum,sum);
	return 0;
}
