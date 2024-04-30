#include<stdio.h>
int main(){
	int a;
	printf("Enter the number:\n");
	scanf("%d",&a);
	(a>=0)?a:a=a*-1;
	printf("mod = %d\n",a);
	return 0;
}
