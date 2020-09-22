//
// Sample solution for COMP1521 lab exercises
//
// Convert a 16-bit signed integer to a string of binary digits

#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <assert.h>

#define N_BITS 16

char *sixteen_out(int16_t value);

int main(int argc, char *argv[]) {

    for (int arg = 1; arg < argc; arg++) {
        long l = strtol(argv[arg], NULL, 0);
        assert(l >= INT16_MIN && l <= INT16_MAX);
        int16_t value = l;

        char *bits = sixteen_out(value);
        printf("%s\n", bits);

        free(bits);
    }

    return 0;
}

// given a signed 16 bit integer
// return a null-terminated string of 16 binary digits ('1' and '0')
// storage for string is allocated using malloc
char *sixteen_out(int16_t value) {

    // PUT YOUR CODE HERE
    char *bits = malloc(sizeof(char)*17); //NBITS + the null terminator
    bits[N_BITS] = '\0';

    for(int i=0;i<N_BITS;i++){
        int buffer = N_BITS - i - 1;
        int temp = 1 << buffer;
        //temp = 1100 0000 0000 0000 when i = 1
        int curr = (value & temp) >> buffer;
        //value = 1111 1111 1111 1111 
        //temp  = 1100 0000 0000 0000 when i = 1
        // ------  & --------
        //curr  = 1100 0000 0000 0000 when i = 1
        //bits[1] = 1 
        if(curr == 1){ 
            bits[i] = '1';
        } else {
            bits[i] = '0';
        }
    }

    return bits;

}

