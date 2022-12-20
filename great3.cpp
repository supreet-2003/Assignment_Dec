#include <stdio.h>
int main(){//23 45 657

	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	if(a>b&&a>c){
		printf("%d",a);
	}
	else if(b>a&&b>c){
		printf("%d",b);
	}
	else if(c>a&&c>b){
		printf("%d",c);
	}
	else if(c==a||c==b||a==b){
		printf("2 numbers are equal");
	}
	else if(a==b&&a==c){
	   printf("All three number are equal");
	}
		
	
	
}
