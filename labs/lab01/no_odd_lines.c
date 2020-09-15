#include <stdio.h>
#include <string.h>
#define SIZE 1024

int main(void) {
	char input[SIZE];
	fgets(input, SIZE, stdin);
	int i;
	for(i = 0; i < SIZE; i++){
		if(input[i] == EOF) break;
	}
	//printf("%d",i);
	if(i%2==0){ 
		printf("%d",i);
		fputs(input,stdout);
	}

	return 0;
}
