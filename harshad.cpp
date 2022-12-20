#include <stdio.h>
int main(){
	int a,sum=0,b;
	scanf("%d",&a);
	b=a;
	while(a>0){//675
		sum=sum+a%10;
		a=a/10;
	}
	if(b%sum==0){
		printf("The number input is a Harshad Number");
	}
	else{
		printf("The number input is not a Harshad number");
	}
	return 0;
}
