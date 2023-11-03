#include<stdio.h>
#include<string.h>
int main()
{
	int i,len;
	char a[1000];
	printf("Enter code line:");
	gets(a);
	len=strlen(a);
	for(i=0;i<len;i++)
	{
		if(a[i]=='/' && a[i+1]=='/')
		{
			printf("It is a sinle line comment.");
		}
		else if(a[i]=='/' && a[i+1]=='*' && a[len-2]=='*' && a[len-1]=='/')
		{
			printf("It is a comment.");
		}
		else 
		{
			printf("It is not a comment.");
		}
		break;
	}
	return 0;
}
