# include <stdio.h>
int main()
{
	char str[100],strnospace[100];
	int i=0,j=0;
	printf("Enter a string:");
    gets(str);
    
    while(str[i]!='\0') {
    	if(str[i]!=' ')
    	{
    	    strnospace[j++]=str[i];
		}
		i++;
	}
	strnospace[j]='\0';
	printf("%s",strnospace);
	return 0;
}
