#include <stdio.h>
#include <stdlib.h>

void collatz(long n);

int main(int argc, char **argv)
{
	(void) argc, (void)argv;
	if(argc <= 1) printf("Usage: ./collatz NUMBER\n");
	else{
		long arg = strtol(argv[1],NULL,10);
		collatz(arg);
	}

	return EXIT_SUCCESS;
}

void collatz(long n){
	printf("%d\n", n);
	if(n%2==0){
		collatz(n/2);
	}else{
		long odd = (3*n) + 1;
		collatz(odd);
	}
}
