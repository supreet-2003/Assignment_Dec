#include <stdio.h>
int main(){
	int z;
	printf("Please enter a number between 1 to 10 for the following codes:\n\n1-vowel or consonant\n2-alphabet or not\n3-ASCII value of a character\n");
	printf("4-number is positive or not\n5-number is even or odd\n6-swap two numbers without third variable\n7-area of circle\n");
	printf("8-LCM of a number\n9-GCD of a number\n10-uppercase lowercase or special\n");
	scanf("%d",&z);
	switch(z){
		case 1:
			printf("Enter any character\n");
	char a;
	scanf("%c",&a);
	if(a=='a'|| a=='e'|| a=='i'|| a=='o'|| a=='u'||a=='A' 
	      || a=='E'||a=='I'|| a=='O'|| a=='U'){
		printf("%c is a vowel",a);
		
	}else{
		printf("%c is a consonant",a);
	}
			break;
		case 2:
				char b;
	scanf("%c",&b);
	if(b>='a'&&b<='z'||b>='A'&&b<='Z'){
		printf("Input is an Alphabet");
	}else{
		printf("Input is not an Alphabet");
	}
		    break;
		case 3:
			char c;
	printf("Enter any character\n");
	scanf("%c",&c);
	printf("The ASCII value of the character is %d",c);
	return 0;
		    break; 
		case 4:
		    int d;
	scanf("%d",&d);
	if(d>0){
		printf("Input is a positive integer");
	}else if(d=0){
		printf("Input is Zero");
	}else{
		printf("Input is a negative integer");
	}
		case 5:
		    int e;
	scanf("%d",&e);
	if(e%2==0){
		printf("The Input is Even");
	}else{
		printf("The Input is Odd");
	} 
	    case 6:
	    	int f,g;
	scanf("%d%d",&f,&g);
	f=f+g;//a=10 b=20
	g=f-g;
	f=f-g;
	printf("The Swapped numbers are:\n%d\n%d",f,g);
	    case 7:
	    	float radius,area;
	scanf("%f",&radius);
	area=3.14*radius*radius;
	printf("The area of the Circle is%f",area);
	    case 8:
	    	int h,i,max1,max2;
	scanf("%d%d",&h,&i);
	if(h>i){//7 5	
	max1=i;
		for(max1;max1<=h*i;max1=max1+i){
			if(max1%h==0&&max1%i==0){
				printf("%d",max1);
				break;			
			}
		}
	}
	else if(i>h){
	max2=h;	
		for(max2;max2<=h*i;max2=max2+h){
			if(max2%h==0&&max2%i==0){
				printf("%d",max2);			
			break;
		    }
			}
	}
	    case 9:
	    	int n1, n2, j, gcd;

    printf("Enter two integers: ");
    scanf("%d %d", &n1, &n2);

    for(j=1; j <= n1 && j <= n2; ++j)
    {
        // Checks if i is factor of both integers
        if(n1%j==0 && n2%j==0)
            gcd = j;
    }

    printf("G.C.D of %d and %d is %d", n1, n2, gcd);
        case 10:
        	 //for initialize of character
          char s;
    
      //to take user input   
         printf("Enter any character : ");
         scanf("%c",&s);

     //to find true of upper case value.
        if(s>='A' && s<='Z')
             printf("character is  an upper case");
        
     //to check of lowercase character
        else if(s>='a' && s<='z')
            printf("character is a lower case");
       
    //to check it is not a character
       else if(s>='0'&& s<='9')
           printf("it is not a character");
       //all condition false than
         else
          printf("character is a special character");
		default:
			printf("Please enter a valid number between 1 to 10");
	}
	return 0;
}
