#include <stdio.h>
#include <stdlib.h>

unsigned int memo[47] = {[0 ... 46] = -1};

int fibonacci(int n);

int main(void)
{

	memo[0] = 0;
	memo[1] = 1;

	int n =0;
	int output = 0;
	while(scanf("%d",&n)==1){
		output = fibonacci(n);
		printf("%d\n", output);
	}
	return EXIT_SUCCESS;
}

int fibonacci(int n){

	if(memo[n] == -1){
		if(n <= 1){
			memo[n] = n;
		}else{
			memo[n] = fibonacci(n-1) + fibonacci(n-2);
		}
	}



	return memo[n];

}
