#include <stdio.h>
int main(){
	int a,b,rev;
	scanf("%d",&a);
	b=a;
	while(a>0){
		rev=rev*10+a%10;
		a=a/10;
	}
	if(b==rev){
		printf("The number is a Palindrome");
	}
	else{
		printf("The number is not a Palindrome");
	}
	return 0;
}
