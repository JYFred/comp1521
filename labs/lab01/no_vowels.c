#include <stdio.h>
#include <string.h>

int check_vowel(char c);

int main(void) {
	char input;
	while(scanf("%c",&input)!='\0'){
		if(check_vowel(input)){
			printf("%c",input);
		}
	}

}

int check_vowel(char c){
	if(c == 'a' ||c == 'A' ||c == 'e' ||c == 'E' ||c == 'i' ||c == 'I' ||c == 'o' ||c == 'O' ||c == 'u' ||c == 'U'){
		return 1;
	}else{
		return 0;
	}
}
