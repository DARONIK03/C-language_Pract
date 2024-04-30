#include<stdio.h>
#include<math.h>
int main(){
	int a,b,c,d;
	float x1,x2;
	printf("enter the three values :-- ");
	scanf("%d %d %d",&a,&b,&c);
	d=((b*b)-(4*a*c));
	if(d==0){
		x1=(-(float)b/(2*a));
		printf("%f",x1);
	}else if(d>0){
		x1=(-b+sqrt(d))/(2*a);
		x2=(-b-sqrt(d))/(2*a);
		printf("%f %f",x1,x2);
	}else
	printf("IR");
	return 0;
}
