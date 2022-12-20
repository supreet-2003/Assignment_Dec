#include <stdio.h>
int main(){
	char a;
	scanf("%c",&a);
	if(a>='a'&&a<='z'||a>='A'&&a<='Z'){
		printf("Input is an Alphabet");
	}else{
		printf("Input is not an Alphabet");
	}
	return 0;
}
