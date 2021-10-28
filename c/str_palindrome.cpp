# include <stdio.h>
# include <string.h>

int main()
{
	char str[100];
	int i,flag=0,length;
	printf("Enter a string:");
    gets(str);
    length=strlen(str);
    for(i=0;i<length;i++)
    {
    	if(str[i]!=str[length-i-1])
    	{
    	   flag=1;
		   break;	
		}
	}
	if(flag==1)
	{
		printf("The given string is not a palindrome");
	}
	else
		printf("The given string is  a palindrome");
}
