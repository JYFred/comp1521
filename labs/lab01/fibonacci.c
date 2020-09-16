#include <stdio.h>
#include <stdlib.h>

unsigned int memo[47] = {[0 ... 46] = -1};
static size_t count = 0;

int fibonacci(int *cache, int n);

int main(void)
{

	memo[0] = 0;
	memo[1] = 1;

	int n =0;
	while(scanf("%d",&n)==1){
		fibonacci(memo, n);
	}
	return EXIT_SUCCESS;
}

int fibonacci(int *cache, int n){

	count++;

	if(memo[n] == -1){
		memo[n] = fibonacci(memo, n-1) + fibonacci(memo, n-2); 
		printf("%d",memo[n]);
	}

	return cache[n];

}
