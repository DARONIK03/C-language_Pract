#include<stdio.h>
int main()
{
	int matx[3][2],trns[3][2],i,j;
	printf("enter the matrix 1:- \n");
	for(i=0;i<3;i++)
	for(j=0;j<2;j++)
	{
			printf("(%dx%d) row-wise :- \t",i,j);
		scanf("%d",&matx[i][j]);
    }
	for(i=0;i<2;i++)
	for(j=0;j<3;j++)
	trns[i][j]=matx[j][i];
	printf(" the transpose of the respected matrix is :- \n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		printf("%5d",trns[i][j]);
		printf("\n");
	}
}
