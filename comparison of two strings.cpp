#include<stdio.h>
#include<string.h>
int main()
{
	char a[300],b[300];
	int i=0,leng1=0,leng2=0,same=0;
	printf("\n enter the 1st string:-- ");
	gets(a);
	printf("\n enter the 2nd string:-- ");
	gets(b);
	leng1=strlen(a);
	leng2=strlen(b);
	if(leng1==leng2)
	{
		while(i<leng1)
		{
			if(a[i]==b[i])
			i++;
			else
			break;
		}
		if(i==leng1)
		{
			same=1;
			printf("\n the two strings are equall");
		}
	}
	if(leng1!=leng2)
	printf("\n the two strings are not equall ");
	if(same==0)
	{
		if(a[i]>b[i])
		printf("\n 1 string is greatest");
		else
		printf("\n 2nd string is greatest" );
	}
	return 0;
}
