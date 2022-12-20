#include <stdio.h>
int main(){
	int a;
	printf("Enter a year");
	scanf("%d",&a);
	if(a%400==0){
		printf("The Year is a Leap Year");
	}
	else{
		printf("The Year is not a Leap Year");
	}
	return 0;
}
