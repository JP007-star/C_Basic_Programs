#include <stdio.h>
int main()
{
	int num1,num2;
	printf("Enter the two numbers:\n");
	scanf("%d\n%d",&num1,&num2);
	
	if(num1 > num2)
	printf("%d is greatest",num1);	
	else if(num2 > num1)
    printf("%d is greatest \n",num2);	
	else
    printf("%d and %d are equal",num1,num2);	
    return 0;
}
