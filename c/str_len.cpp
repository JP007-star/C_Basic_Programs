# include <stdio.h>
int main ()
{
	char str[100];
	int i,length=0;
	
	printf("Enter a String:");
	scanf("%s",&str);
	
	for (i=0;str[i]!='\0';i++)
	{
		length++;
	}
	printf("The lenght of the given string is: %d",length);
	return 0;	
}
