#include<stdio.h>
int main()
{
	int arr[100],i,n,pos;
	printf("enter the size of the array:-- ");
	scanf("%d",&n);
	printf("enter the elements :-- ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("enter the position  of deletion :-- ");
	scanf("%d",&pos);
	for(i=pos-1;i<=n-1;i++)
	arr[i]=arr[i+1];
	n--;
	printf("after operation the array is :-- \n");
	for(i=0;i<n;i++)
	printf("\t %d",arr[i]);
	return 0;
}

