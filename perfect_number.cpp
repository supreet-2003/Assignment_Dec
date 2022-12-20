#include <stdio.h>
int main(){
	int a,sum=0;
	scanf("%d",&a);//28
	for(int i=1;i<a;i++){
		if(a%i==0){
			sum=sum+i;
		}
	}
	if(sum==a){
		printf("The number input is a perfect number");
	}
	else{
		printf("The number input is not a perfect number");
	}
	return 0;
}
