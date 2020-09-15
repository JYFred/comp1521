#include <stdio.h>

int main(int argc, char **argv) {
	(void) argc, (void) argv;
	if(argc > 0) printf("Program name: %s", argv[0]);
	if(argc > 1){
		for(int i =1; i < argc;i++){
			printf("Argument %d is %s", i, argv[i]);
		}
	}
	return 0;
}
