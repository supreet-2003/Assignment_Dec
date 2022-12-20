#include <stdio.h>
int main(){
	int a,b,max1,max2;
	scanf("%d%d",&a,&b);
	if(a>b){//7 5	
	max1=b;
		for(max1;max1<=a*b;max1=max1+b){
			if(max1%a==0&&max1%b==0){
				printf("%d",max1);
				break;			
			}
		}
	}
	else if(b>a){
	max2=a;	
		for(max2;max2<=a*b;max2=max2+a){
			if(max2%a==0&&max2%b==0){
				printf("%d",max2);			
			break;
		    }
			}
	}
	return 0;
}
	
