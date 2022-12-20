#include <stdio.h>
int main(){
	int a=0,b=1,c,d;
	scanf("%d",&d);
	printf("0 1 ");
	for(int i=1;i<=d;i++){
		c=a+b;
		printf("%d ",c);
		a=b;
		b=c;
	}
	return 0;
	
}
