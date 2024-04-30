#include<stdio.h>
#include<string.h>
int main()
{
	int count=0,i=0;
	char a[100];
	printf("enter the string:-- ");
	gets(a);
	//count=strlen(a);
	while(a[i]!='\0')
	{
		count++;
		i++;
	}
	puts(a);
	printf("string length is : %d",count);
	return 0;
}
