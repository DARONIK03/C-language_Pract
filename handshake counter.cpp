#include<stdio.h>
int main(){
	int a,h;
	printf("enter the number of people present");
	scanf("%d",&a);
	h=(a*(a-1))/2;
	printf("the total numbers of handshakes = %d",h);
	return 0;
}
