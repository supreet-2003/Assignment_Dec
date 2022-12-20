#include <stdio.h>
int fact(int a){
	int sum=1;
	for(int i=1;i<=a;i++){
	sum=sum*i;	
	}
	return sum;
	
}
int main(){
	int p,b,c;
	scanf("%d",&p);
	b=fact(p)/fact(p-2);
	c=b/2;
	printf("%d",c);
	return 0;
	
	
	
	
	
	
	
	
}
