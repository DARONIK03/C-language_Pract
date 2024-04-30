#include<stdio.h>

int main()
{
	char str1[100],str2[100],str3[100];
	int i=0,j=0;
	printf("enter the first string:-- ");
	gets(str1);
	printf("enter the second string:-- ");
	gets(str2);
	while(str1[i]!='\0')
	{
		str3[j]=str1[i];
		i++;
		j++;
	}
	i=0;
	while(str2[i]!='\0')
	{
		str3[j]=str2[i];
		i++;
		j++;
	}
	str3[j]='\0';
	printf("the concatenate string will be :-- ");
	puts(str3);
	return 0;
}
/*   when done by function 

#include<stdio.h>
void cat(char[],char[]);
int main()
{
    char a[100],b[100];
    printf("Enter first string:- \n");
    gets(a);
    printf("Enter second string:- \n");
    gets(b);
    printf("the concatenete string will be :-- \n");
    cat(a,b);
    return 0;
}
void cat(char a[],char b[])
{
    char c[200];
    int i,j=0;
    while(a[i]!='\0')
    {
        c[i]=a[i];
        i++;
    }
    while(b[j]!='\0')
    {
        c[i]=b[j];
        i++;
        j++;
    }
    c[i]='\0';
    puts(c);
}*\
