#include <stdio.h>
#include <string.h>
int main()
{
	int i,length=0;
	char str[100];
	
	
	printf("Enter the string: ");
	gets(str);
	length = strlen(str);
	for(i=0;i<length;i++)
	{
		if(i==0||i==(length-1))
		{
			str[i]=toupper(str[i]);
		}
		else if(str[i]==' ')
		{
			str[i-1]=toupper(str[i-1]);
			str[i+1]=toupper(str[i+1]);
		}
	}
	printf("%s",str);
}
