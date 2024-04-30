#include<stdio.h>
#include<string.h>
int main()
{
	int i=0,u=0;
	char a[100],cho;
	printf("enter the string:-- ");
	gets(a);
	u=strlen(a)-1;
    while(i<u)
    {
    	cho=a[i];
    	a[i]=a[u];
    	a[u]=cho;
    	i++;
    	u--;
	}
	printf("\n the reverse string is :-- ");
	puts(a);
	return 0;
}
