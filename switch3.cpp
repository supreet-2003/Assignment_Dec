#include <stdio.h>
#include <math.h>//a b rev z n i flag x y num subs numm sum lastdidgit 
int main(){//v summ j sums s t
	int z;
	scanf("%d",&z);
	switch(z){
		case 1:{
			int n, i, check = 1;
  
    // Ask user for input
    printf("Enter a number: \n");
  
    // Store input number in a variable
    scanf("%d", &n);
  
    // Iterate from 2 to sqrt(n)
    for (i = 2; i <= sqrt(n); i++) {
  
        // If n is divisible by any number between
        // 2 and n/2, it is not prime
        if (n % i == 0) {
            check = 0;
            break;
        }
    }
    if (n <= 1)
        check = 0;
    if (check == 1) {
        printf("%d is a prime number", n);
    }
    else {
        printf("%d is not a prime number", n);
    }
			break;
		}
	case 2:
		{int a,b,rev;
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
		break;}
	case 3:{
		int x,y=0;
	printf("Enter the number\n");
	scanf("%d",&x);
	int subs=x;
	while(x>0){
		int num;
		num=x%10;
		y=y+pow(num,3);
		x=x/10;	
	}
	if(y==subs){
		printf("%d is an Armstong number",subs);
	}else{
		printf("%d is not an Armstrong number",subs);
	}
		break;
	}
	case 4:{
		int i, originalNum, numm, lastDigit, sum;
    long fact;

    /* Input a number from user */
    printf("Enter any number to check Strong number: ");
    scanf("%d", &numm);

    /* Copy the value of num to a temporary variable */
    originalNum = numm;

    sum = 0;

    /* Find sum of factorial of digits */
    while(numm > 0)
    {

        /* Get last digit of num */
        lastDigit = numm % 10;

        /* Find factorial of last digit */
        fact = 1;
        for(i=1; i<=lastDigit; i++)
        {
            fact = fact * i;
        }

        /* Add factorial to sum */
        sum = sum + fact;

        numm = numm / 10;
    }

    /* Check Strong number condition */
    if(sum == originalNum)
    {
        printf("%d is STRONG NUMBER", originalNum);
    }
    else
    {
        printf("%d is NOT STRONG NUMBER", originalNum);
    }
		break;
	}
	case 5:{
		int v,summ=0;
	scanf("%d",&v);//28
	for(int j=1;j<v;j++){
		if(v%j==0){
			summ=summ+j;
		}
	}
	if(summ==v){
		printf("The number input is a perfect number");
	}
	else{
		printf("The number input is not a perfect number");
	}
		break;
	}
	case 6:{
		int s,sums=0,t;
	scanf("%d",&s);
	t=s;
	while(s>0){//675
		sums=sums+s%10;
		s=s/10;
	}
	if(t%sums==0){
		printf("The number input is a Harshad Number");
	}
	else{
		printf("The number input is not a Harshad number");
	}
		break;
	}	
	case 7:{
		int number1,number2,k;
   printf("Enter two numbers:");
   scanf("%d%d",&number1,&number2);
   int result1=0,result2=0;
   for(k=1;k<number1;k++){
      if(number1 % k == 0){
         result1= result1 +k;
      }
   }
   for(k=1;k<number2;k++){
      if(number2 % k == 0){
         result2=result2+k;
      }
   }
   if(result1==number1 && result2==number2)
      printf("The above numbers are abundant pairs");
   else{
   	printf("The numbers are not abundant pairs");
   }
		break;
	}
	case 8:{
		int number,exp;
		scanf("%d%d",&number,&exp);
		long power=1;
		while(exp!=0){
			power*=number;
			exp--;
		}
		printf("%d",power);
		break;
	}
	default:{
		printf("Please enter a valid number between 1 to 10");
	}
	}
}
