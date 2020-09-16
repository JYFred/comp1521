#include <stdio.h>
#include <stdlib.h>

unsigned int memo[47] = {[0 ... 46] = -1};
static size_t count = 0;

int fibonacci(int n);

int main(void)
{

	memo[0] = 0;
	memo[1] = 1;

	int n =0;
	while(scanf("%d",&n)==1){
		fibonacci(n);
	}
	return EXIT_SUCCESS;
}

int fibonacci(int n){

	count++;

	if(memo[n] == -1){
		memo[n] = fibonacci(n-1) + fibonacci(n-2); 
		printf("%d",memo[n]);
	}

	return memo[n];

}
