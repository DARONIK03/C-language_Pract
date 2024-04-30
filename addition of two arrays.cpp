#include<stdio.h>
int main()
{
    int a [10],b[10],c[10], num,i ;
    printf("Enter the number of elements:\n");
    scanf("%d",&num);
    printf("Enter %d elements for a array 1 :\n",num);
    for(i=0;i<num;i++)
        scanf("%d",&a[i]);
        printf("Enter %d elements for array 2 :\n",num);
        for(i=0;i<num;i++)
        scanf("%d",&b[i]);
        for(i=0;i<num;i++)
            c[i]=a[i]+b[i];
        printf("sum of two arrays are :\n");
        for(i=0;i<num;i++)
            printf(" %d ",c[i]);
}
