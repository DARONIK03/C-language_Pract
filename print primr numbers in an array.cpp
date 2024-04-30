#include<stdio.h>
 
int main()
{
    int i,j,n,k=0;
    
    printf("Enter the limit of prime array :-- \n");
    scanf("%d",&n);
    
    printf("Prime numbers are(except 1 because its always a prime):- \n");    
    for(i=2;i<=n;i++)
    {
        int c=0;
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
            {
                c++;
            }
        }

       if(c==2)
        {
            printf("a[%d]=%d\n ",k,i);
            k++;
        }
    }
    return 0;
}
