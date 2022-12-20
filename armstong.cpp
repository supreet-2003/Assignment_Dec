#include <stdio.h>
#include <math.h>
int main(){
	int a,b=0;
	printf("Enter the number\n");
	scanf("%d",&a);
	int subs=a;
	while(a>0){
		int num;
		num=a%10;
		b=b+pow(num,3);
		a=a/10;	
	}
	if(b==subs){
		printf("%d is an Armstong number",subs);
	}else{
		printf("%d is not an Armstrong number",subs);
	}
	return 0;
}
