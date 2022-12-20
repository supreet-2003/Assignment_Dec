#include<stdio.h>
#include<math.h>

int main(){
	int a,b,c;//1 -1 -30
	float x,y,z;
	printf("Please enter the coefficients of equation\n");
	scanf("%d%d%d",&a,&b,&c);
	z=sqrt(pow(b,2)-4*a*c);
	y=(-b+z)/(2*a);
	x=(-b-z)/(2*a);
	printf("%f\n%f",y,x);
	
}
