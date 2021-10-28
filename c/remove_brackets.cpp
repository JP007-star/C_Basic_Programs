# include <stdio.h>
int main()
{
	char str[100],strnobrac[100];
	int i=0,j=0;
	printf("Enter a string:");
    gets(str);
    
    while(str[i]!='\0') {
    	if(str[i]!='('&&str[j]!=')')
    	{
    	    strnobrac[j++]=str[i];
		}
		i++;
	}
	strnobrac[j]='\0';
	printf("%s",strnobrac);
	return 0;
}
