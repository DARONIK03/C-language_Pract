#include<stdio.h>
void multiply(int[][10],int[][10],int,int,int,int);
int main()
{
   int a[10][10],b[10][10],c[10][10],r1,r2,c1,c2,i,j,result;
   printf("enter the row and column of the 1st matrix:");
   scanf("%d%d",&r1,&c1);
   printf("enter the matrix row by row:\n");
   for(i=0;i<r1;i++)
   {
       for(j=0;j<c1;j++)
       {
           scanf("%d",&a[i][j]);

       }
   }
      printf("enter the row and column of the 2nd matrix:");
   scanf("%d%d",&r2,&c2);
   printf("enter the matrix row by row:\n");
   for(i=0;i<r2;i++)
   {
       for(j=0;j<c2;j++)
       {
           scanf("%d",&b[i][j]);

       }
   }
   multiply(a,b,r1,c1,r2,c2);
   return 0;
}
void multiply(int a[10][10],int b[10][10],int r1,int c1,int r2,int c2)
{
    int i,j,c[10][10],k;
    if(r2==c1)
        {

     for(i=0;i<r1;i++)
    {
        for(j=0;j<r2;j++)
        {
            c[i][j]=0;
            for(k=0;k<r1;k++)
            {
                c[i][j]=c[i][j]+a[i][k]*b[k][j];
            }
        }
    }
       for(i=0;i<r1;i++)
   {
       for(j=0;j<c2;j++)
       {
           printf("%d\t",c[i][j]);
        }
         printf("\n");
   }
}
}
