#include <stdio.h>
int rev(int p){
	int q=0,r;
	while(p>0){
	q=q*10+p%10;
	p=p/10;
	
	}
	r=printf("%d",q);
	return r;
}
int main(){
	int a,c,b=0;
	scanf("%d",&a);
	c=a;//22
	while(a>0){
		b=b*10+a%2;
	a=a/2;
	
	}
	rev(b);
	
	
	
}
