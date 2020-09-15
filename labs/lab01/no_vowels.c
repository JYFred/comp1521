#include <stdio.h>
#include <string.h>

int check_vowel(char c);

int main(void) {
	char input[1024] = { 0 };
	char c[1024] = {0};
	scanf("%c",input);

	for(int i=0;i != '\0';i++){
		if(check_vowel(input[i])==0){
			printf("assigning vlaue");
			c[i] = input[i];
		}
	}

	printf("%s",c);

}

int check_vowel(char c){
	if(c == 'a' ||c == 'A' ||c == 'e' ||c == 'E' ||c == 'i' ||c == 'I' ||c == 'o' ||c == 'O' ||c == 'u' ||c == 'U'){
		return 1;
	}else{
		return 0;
	}
}
