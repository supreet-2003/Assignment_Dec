#include <stdio.h>
#include<math.h>
int main(){
	int a,d=0,i=0;
	printf("Enter the binary digit\n");//1001010
	scanf("%d",&a);
	while(a>0){
		int b=a%10;
		a=a/10;
		d=d+b*pow(2,i);
		i++;
	}
	printf("%d",d);
	return 0;
}
