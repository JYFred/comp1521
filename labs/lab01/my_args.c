#include <stdio.h>

int main(int argc, char **argv) {
	(void) argc, (void) argv;
	if(argc <= 1){ 
		printf("Program name: %s\n", argv[0]);
		printf("There are no other arguments\n");
	}
	if(argc > 1){
		printf("Program name: %s\n", argv[0]);
		printf("There are %d arguments:\n", argc);
		for(int i =1; i < argc;i++){
			printf("\tArgument %d is %s\n", i, argv[i]);
		}
	}
	return 0;
}
