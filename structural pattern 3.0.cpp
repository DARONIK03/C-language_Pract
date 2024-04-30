#include<stdio.h>
int main()
{
	int i,j,rows,col,k;
	printf("enter thr no of rows:-- ");
	scanf("%d",&rows);
	for(i=1;i<=rows;i++)
	{
		for(col=1;col<=rows-i;col++)
		{
			printf(" ");
		}
		for(j=i;j<=2*i-1;j++)
		{
			printf("%d",j);
		}
		for(k=2*i-2;k>=i;k--)
		{
			printf("%d",k);
		}
		printf("\n");
	}
	return 0;
}
