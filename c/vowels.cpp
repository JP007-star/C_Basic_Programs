# include <stdio.h>
int main()
{
	char str[100];
	int i,vowel=0;
	
	printf("Enter a string:");
    gets(str);
    
    for(i=0;str[i]!='\0';i++)
    {
    	if(str[i]=='a' || str[i]=='e'|| str[i]=='i' ||str[i]=='o'|| str[i]=='u'||str[i]=='A' || str[i]=='E'|| str[i]=='I' ||str[i]=='0'|| str[i]=='U')
    	vowel++;
	}
	printf("The number of vowel in the string:%d",vowel);
}
