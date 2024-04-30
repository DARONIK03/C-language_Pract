#include<stdio.h>
#include<stdlib.h>
int prime(int n){
	int i;
	for(i=2;i<n;i++){
		if(n%i==0)
		return 0;
	}
	return 1;
}void fact(int n){
	int f=1,i;
	for(i=1;i<=n;i++)
	f=f*i;
	printf("fact=%d\n",f);
}void leapyear(int n){
	if(n%400==0||n%100!=0&&n%4==0)
	printf("leap year");
	else
	printf("not leap year");
}
int main(){
	int n,ch;
	printf("enter a nnmber");
	scanf("%d",&n);
	printf("press 1 for prime identification\n press 2 for factorial calculation\n press 3 for leap year test\n press 0 for exiting ");
	printf("enter your choice");
	scanf("%d",&ch);
	switch(ch){
		case 1:if( prime(n))
		printf("prime\n");
		else
		printf("not prime\n");
		break;
		case 2:fact(n);
		break;
		case 3:leapyear(n);
		break;
		case 0:printf("thank u");
		exit(0);
		default :printf("selecr a correct comand\n");
	}return 0;
}
