#include<stdio.h>
int main(){
	int i,a=-1,b=1,n,s;
	printf("enter the value of n");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		s=a+b;
		a=b;
		b=s;
	}printf("res=%d\n",s);
	return 0;
}
