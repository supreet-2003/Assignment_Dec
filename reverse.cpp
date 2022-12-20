#include <stdio.h>
int main(){
	int a,rev=0;
	scanf("%d",&a);
	while(a>0){
		rev=rev*10+a%10;
		a=a/10;
	}
	printf("%d",rev);
	return 0;
}
