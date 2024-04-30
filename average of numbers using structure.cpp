#include<stdio.h>
struct student{
    char name[10];
    int roll;
    float marks[10];
float avg;
};
int main()
{
    struct student x[110];
    int i,j,n;
    float l;
    printf("enter the no of students:--\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("enter the students name:--\n");
        scanf("%s",&x[i].name);
            printf("enter the students roll no:--\n");
        scanf("%d",&x[i].roll);
           printf("enter the students marks:-- \n");
           for(j=0;j<4;j++)
           {
               scanf("%f",&x[i].marks[j]);
           }

    }

      for(i=0;i<n;i++)
      {
          l=0;
           for(j=0;j<4;j++)
           {
               l=l+1.0*x[i].marks[j];
           }
           printf("Student name:%s\nStudent roll:%d\n",x[i].name,x[i].roll);
           printf("Student average:%f\n",l/4.0);
      }

return 0;
}
