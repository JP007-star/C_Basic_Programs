# include <stdio.h>
int main ()
{
	int base ,exp,temp;
	long long result=1;
	printf("Enter a base number:");
	scanf("%d",&base);
	printf("Enter a expo number:");
	scanf("%d",&exp);
	temp=exp;
	while(exp!=0){
		result*=base;
		exp--;
	}
	printf("The power of %d ^ %d is :%lld",base,temp,result);
}
