# include <stdio.h>
int main()
{
	int first[256]={0},second[256]={0},i=0,flag=0;
	char str1[100],str2[100];  
	
	printf("Enter a  1 st string :");
	gets(str1);
	printf("Enter a 2 nd string :");
	gets(str2);
	
	for(i=0;str1[i]!='\0';i++)
	{
		first[str1[i]-'a']++;
	}
	for(i=0;str2[i]!='\0';i++)
	{
		second[str2[i]-'a']++;
	}
	for(i=0;i<26;i++)
	{
		if(first[i]!=second[i])
		{
			flag=1;
		}
	}
	if(flag==0)
	{
		printf("The given string are  anagram");
	}
	else
	printf("The given string are not  anagram");
	return 0;
}
