#include<stdio.h>
int main(){
	char p;
	printf("enter the chareter please --- :");
	scanf("%c",&p);
	if(p>=65&&p<=90)
	printf("------the charecter is an upper case alphabet");
	else if(p>=97&&p<=122)
	printf("------it is an lower case alphabet");
	else if(p>=48&&p<=57)
	printf("-----this is a number");
	else if(p>=33&&p<=47||p>=58&&p<=64)
	printf("-----this is a symbol");
	return 0;
}
