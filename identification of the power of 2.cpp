#include<stdio.h>
int main(){
	int a;
	printf("enter the number");
	scanf("%d",&a);
	if ((a&a-1)==0)
	printf("the number is a power of 2");
	else 
	printf("this is not a power of 2");
	return 0;	
}
