#include <stdio.h>
#include <string.h>

int check_vowel(char c);

int main(void) {
	char input[100], copy[100];
	scanf("Please input the string here: \n", input);
	int e = 0;
	for(int i=0;i<sizeof(input);i++){
		if(check_vowel(input[i])==0){
			copy[e] = input[i];
			e++;
		}
	}

	copy[e] = '\0';
	strcpy(input, copy);
	printf("The new string is:\n %s\n", input);
}

int check_vowel(char c){
	if(c == 'a' ||c == 'A' ||c == 'e' ||c == 'E' ||c == 'i' ||c == 'I' ||c == 'o' ||c == 'O' ||c == 'u' ||c == 'U'){
		return 1;
	}else{
		return 0;
	}
}
