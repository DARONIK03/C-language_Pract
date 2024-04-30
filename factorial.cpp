#include<stdio.h>
int main(){
	int i,s=1,n;
	printf("enter range");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	s=s*i;
	printf("fact=%d\n",s);
	return 0;
}
