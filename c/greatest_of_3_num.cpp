# include <stdio.h>
int main()
{
   int num1,num2,num3;
   printf("Enter three numbers :");
   scanf("%d\n%d\n%d",&num1,&num2,&num3);
   
   if((num1>num2)&&(num1> num3))
   printf("The Number %d is greatest.",num1);
   
   else if((num2>num1)&&(num2> num3))
   printf("The Number %d is greatest.",num2);
   
   else
   printf("The Number %d is greatest.",num3);  
}

