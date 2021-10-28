#include <stdio.h>
int main ()
{
	int i,freq[256]={0};
	char str[100];
	
	printf("Enter a string: ");
	gets(str);
	
	for(i=0;str[i]!='\0';i++)
	{
		freq[str[i]]++;
	}
	for(i=0;i<256;i++)
	{
		if(freq[i]!=0)
		{
			printf("The frequency of %c is :%d\n",i,freq[i]);
		}
	}
	return 0;
} 
