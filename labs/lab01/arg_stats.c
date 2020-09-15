#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {
	(void) argc, (void) argv;
	if(argc <= 1){
		printf("Usage: ./arg_stats NUMBER [NUMBER]");
	}else{
		int min = 100;
		int max = 0;
		int sum = 0;
		int prod = 1;
		int mean = 0;
		for(int i = 1; i < argc; i++){
			sum += (int)argv[i];
			if(argv[i] < min) min = argv[i];
			if(argv[i] > max) max = argv[i];
			mean = sum/(argc-1);
			prod *= (int) argv[i];
		}
	}
	return 0;
}
