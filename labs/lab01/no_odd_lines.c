#include <stdio.h>
#include <string.h>
#define SIZE 1024

int main(void) {
	char input[SIZE] = { 0 };
	fgets(input, SIZE, stdin);
	int length = strlen(input);
	input[strcspn(input, "\n")] = 0;
	fputs(input, stdout);

	return 0;
}
