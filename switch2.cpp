#include <stdio.h>
int main(){
	int z;
	scanf("%d",&z);
	switch(z){
		case 1:
			int a,b;
	scanf("%d%d",&a,&b);
	if(a>b){
		printf("%d is Greater than %d",a,b);
	}
    else if(b>a){
	 printf("%d is Greater than %d",b,a);
	           }
	    else{
		printf("%d and %d are equal",a,b);
	    }
	    break;
		case 2:
			int d,e,c;
	scanf("%d%d%d",&d,&e,&c);
	if(d>b&&d>c){
		printf("%d",d);
	}
	else if(e>d&&e>c){
		printf("%d",e);
	}
	else if(c>d&&c>e){
		printf("%d",c);
	}
	else if(c==d||c==e||d==e){
		printf("2 numbers are equal");
	}
	else if(d==b&&d==c){
	   printf("All three number are equal");
	}
	break;
	    case 3:{
	    	int x,w=0;
	    	scanf("%d",&x);
	    	while(x>0){
	    		x=x/10;
	    		w++;
			}
			printf("%d",w);		
			break;}
		case 4:{
			int v,u=0;
			scanf("%d",&v);
			while(v>0){
				u=u+v%10;
				v=v/10;
			}
			printf("%d",u);
		break;}
		case 5:
		{	 int num, i, sum = 0; // declare local variables  
    printf(" Enter a positive number: ");  
    scanf("%d", &num); // take any positive number  
    // executes until the condition remains true.  
    for (i = 0; i <= num; i++)  
    {  
        sum = sum + i; // at each iteration the value of i is added to the sum variable  
    }  
    // display the sum of natural number  
    printf("\n Sum of the first %d number is: %d", num, sum);
	break;}
        case 6:
        	 {int mini,maxi,j, summ = 0; // declare local variables  
    printf(" Enter a positive number range");  
    scanf("%d%d", &mini,&maxi); // take any positive number  
    // executes until the condition remains true.  
    for (j = mini; j <= maxi; j++)  
    {  
        summ = summ + j; // at each iteration the value of i is added to the sum variable  
    }  
    // display the sum of natural number  
    printf("\n Sum of the numbers is: %d",summ);
	break;}
        case 7:
        	{int inp,rev=0;
	scanf("%d",&inp);
	while(inp>0){
		rev=rev*10+inp%10;
		inp=inp/10;
	}
	printf("%d",rev);
break;}
	    case 8:
{
				    	int n,fact=1;
	    	scanf("%d",&n);
	    	for(int st=1;st<=n;st++){
	    		fact=fact*st;
			}
			printf("%d",fact);
		break;}
		case 9:
		{
				int fir=0,sec=1,k,l;
	scanf("%d",&l);
	printf("0 1 ");
	for(int o=1;o<=l;o++){
		k=fir+sec;
		printf("%d ",k);
		fir=sec;
		sec=k;
	}
		break;}
		case 10:
			int year;
	printf("Enter a year");
	scanf("%d",&year);
	if(year%400==0){
		printf("The Year is a Leap Year");
	}
	else{
		printf("The Year is not a Leap Year");
	}
	    default:
			printf("Please enter a valid number between 1 to 10");
	}
	return 0;
}
