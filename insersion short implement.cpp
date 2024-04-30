#include<stdio.h>
void insersion(int a[],int n);
int main ()
{
	int a[10],i,n;
	printf("enter the number of elements of the array :-\n");
	scanf("%d",&n);
	printf("enter the elements of the array :- \n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	insersion(a,n);
	printf("the shortened array is :- \n");
	for(i=0;i<n;i++)
	printf("%d\t",a[i]);
	return 0;
}
void insersion(int a[],int n)
{
	int i,j,k;
	for(i=1;i<n;i++)
	{
		k=a[i];
		j=i-1;
		while ((k<a[j])&&(j>=0))
		{
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=k;
	}
}
