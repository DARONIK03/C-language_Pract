#include<stdio.h>
int sum_n(int n)
{
	if (n)
	return(n+sum_n(n-1));
	else 
	return 0;
}
int main()
{
	int n;
	printf("enter the value of position:-- ");
	scanf("%d",&n);
	printf("the summation of 1 to %d is :- %d",n,sum_n(n));
	return 0;
	
}

