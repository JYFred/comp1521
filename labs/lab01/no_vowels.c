#include <stdio.h>
#include <string.h>

int check_vowel(char c);

int main(void) {
	char output[1024];
	char c = '0';
	while(scanf("%c",&c)!=EOF){
		if(!(check_vowel(c))){
			strcat(output, c);
		}
	}

	printf("%s",output);

}

int check_vowel(char c){
	if(c == 'a' ||c == 'A' ||c == 'e' ||c == 'E' ||c == 'i' ||c == 'I' ||c == 'o' ||c == 'O' ||c == 'u' ||c == 'U'){
		return 1;
	}else{
		return 0;
	}
}
