#include <stdio.h>
#include <string.h>
#define SIZE 1024

int main(void) {
	char input[SIZE] = { 0 };
	while((fgets(input, SIZE, stdin)!=EOF)){
		//input[strcspn(input, "\n")] = 0;
		int length = strlen(input);
		if(length%2==0){
			fputs(input, stdout);
		}
	}
	return 0;
}
