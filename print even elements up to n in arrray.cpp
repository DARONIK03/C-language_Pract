#include<stdio.h>
int main()
{
	int a[100],i=0,j=1,s=0,n,k=0;
	printf("enter the limits:--- ");
	scanf("%d",&n);
	printf("elements of the even array a will be:-- \n");
	while(i<n)
	{
		s=j%2;
		if(s==0)
		{
			printf("a[%d]= %d \n",k,j);
			k++;
	    }
		j=j+1;
	    i++;
	}
	return 0;
}
