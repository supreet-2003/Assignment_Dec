#include <stdio.h>
int main(){
	int a,b;
	scanf("%d%d",&a,&b);
	a=a+b;//a=10 b=20
	b=a-b;
	a=a-b;
	printf("The Swapped numbers are:\n%d\n%d",a,b);
	return 0;
}
