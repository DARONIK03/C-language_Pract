#include<stdio.h>
int fact(int);
int main()
{
	int n , r;
	float result;
	printf("enter the value of n :-- ");
	scanf("%d",&n);
	printf("enter the value of r :-- ");
	scanf("%d",&r);
	result=(float)fact(n)/fact(r);
	printf("P(n/r)=P(%d/%d)=%2f",n,r,result);
	return 0;
}
int fact(int num)
{
	int f=1,i;
	for(i=num;i>=1;i--)
	f=f*i;
	return f;
}
