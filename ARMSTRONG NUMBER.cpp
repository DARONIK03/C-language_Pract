#include<stdio.h>
#include<math.h>
int main(){
	int n,c,x,a=0,s=0;
	printf("enter the number :-- ");
	scanf("%d",&n);
	x=n;
	c=0;
	while(n>0){
		c++;
		n=n/10;
	}n=x;
	while(n>0){
		a=n%10;
		s=s+pow(a,c);
		n=n/10;
	}
	if(s==x)
	printf("this is an armstrong number");
	else
	printf("not a armstrong number");
	return 0;
}
