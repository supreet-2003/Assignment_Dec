#include <stdio.h>
int main(){
	printf("Enter any character\n");
	char a;
	scanf("%c",&a);
	if(a=='a'|| a=='e'|| a=='i'|| a=='o'|| a=='u'||a=='A' 
	      || a=='E'||a=='I'|| a=='O'|| a=='U'){
		printf("%c is a vowel",a);
		
	}else{
		printf("%c is a consonant",a);
	}
	return 0;
	
}
