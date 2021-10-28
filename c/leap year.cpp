#include <stdio.h>
int main()
{
   int year;
   printf("Enter the year to find the given year is leap year or not:");
   scanf("%d",&year);
   
   if (((year%4==0)&&(year%100!=0)||year%400==0))
   {
   	 printf("The given year %d is a leap year",year);	
   }
   else
   printf("The given year %d is not a leap year",year);
   return 0;
}

