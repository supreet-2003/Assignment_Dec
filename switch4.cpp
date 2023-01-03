#include <stdio.h>
#include <math.h>
int fact(int a){
	int sum=1;
	for(int i=1;i<=a;i++){
	sum=sum*i;	
	}
	return sum;
}
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
	printf("Please enter a number between 1 to 10 for the following codes:\n1:Convert digit to word\n2:replace 0 to 1\n");
	printf("3:Maximum number of handshakes\n4:number of times 3 occur\n5:roots of a quadratic equation\n");
	printf("6:Prime numbers in a range\n7:convert binary to decimal\n8:convert decimal to binary\n9:Armstrong number between two intervals\n");
	int znum;
	
	scanf("%d",&znum);
	switch(znum){
		case 1:{
			int a;
	scanf("%d",&a);
	printf("%c",a);
			break;
		}
		case 2:{
			int e,b,c=0;//all 0s with 1
	scanf("%d",&e);
	while(e>0){//123
		b=e%10;
		if(b==0){
			b=1;
		}
		c=c*10+b;
		e=e/10;
		
	}
	int d=0;
	while(c>0){
	d=d*10+c%10;
	c=c/10;
	}
	printf("%d",d);
			
			break;
		}
		case 3:{
			int p,n,hand;
	        scanf("%d",&p);
	        n=fact(p)/fact(p-2);
	    hand=n/2;
	    printf("%d",hand);
			break;
		}
		case 4:{
			int in,sum=0;//38
	scanf("%d",&in);
	for(int i=1;i<=in;i++){
		while(i>0){
			int rem;
			rem=i%10;
			if(rem==3){
				sum=sum+1;
			}
			i=i/10;
			printf("%d",i);
		}
	}
	printf("%d",sum);
			break;
		}
		case 5:{
			int fir,sec,thir;//1 -1 -30
	float x,y,z;
	printf("Please enter the coefficients of equation\n");
	scanf("%d%d%d",&fir,&sec,&thir);
	z=sqrt(pow(sec,2)-4*fir*thir);
	y=(-sec+z)/(2*fir);
	x=(-sec-z)/(2*fir);
	printf("%f\n%f",y,x);
			break;
		}
		case 6:{
			int num1,num2,incre,check;
			scanf("%d%d",&num1,&num2);
			int a[num2];
				for(int ini=num1;ini<=num2;ini++){
					for(int i=1;i<=sqrt(num1);i++){
						if (num1 % i == 0) {
                             check = 0;
            printf("1");
			break;
        }
	}
    if(check==1){
    	printf("Prime");
    	a[ini-num1]=ini;
    }
					}	
			int res=0;		
		while(a[res]==0){
			printf("%d",a[res]);
		res++;
		}			
			break;
		}
		case 7:{
			int binary,deci=0,iq=0;
	printf("Enter the binary digit\n");//1001010
	scanf("%d",&binary);
	while(binary>0){
		int base=binary%10;
		binary=binary/10;
		deci=deci+base*pow(2,iq);
		iq++;
	}
	printf("%d",deci);
			break;
		}
		case 8:{
			int aq,cq,bq=0;
	scanf("%d",&aq);
	cq=aq;//22
	while(aq>0){
		bq=bq*10+aq%2;
	aq=aq/2;
	
	}
	rev(bq);
			break;
		}
		case 9:{
			int mini,maxi,subs1,var=0;
	printf("Enter the number\n");
	scanf("%d%d",&mini,&maxi);
	for(int io=mini;io<=maxi;io++){
	    subs1=io;
	    while(io>=0){
		int numm;
		numm=io%10;
		var=var+pow(numm,3);
		io=io/10;
	}
	if(var==subs1){
		printf("%d is an Armstrong number",subs1);
	continue;
	}
}
			break;
		}
		default:{
			printf("Enter a valid number between 1 to 10");
		}
	}
return 0;
}
