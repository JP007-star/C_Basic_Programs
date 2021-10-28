# include <stdio.h>
int main()
{
	int low,high,i,flag;
	printf("Enter range of nos:\n");
	scanf("%d\n%d",&low,&high);
	printf("The prime nos between the %d and %d are:",low,high);
	
	while(low<high)
	{
		flag=0;
		if(low<=1)
		low++;
		
		for(i=2;i<=low/2;i++)
		{
			if(low%i==0){
				flag=1;
				break;
			}
		}
		if(flag==0){
			printf("%d ",low);
		}
		low++;
	}
	return 0;
}
