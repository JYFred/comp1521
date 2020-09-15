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
			long arg = strtol(argv[i],NULL,10);
			sum += arg;
			if(argv[i] < min) min = arg;
			if(argv[i] > max) max = arg;
			mean = sum/(argc-1);
			prod *= (int) arg;
		}
	}
	return 0;
}
