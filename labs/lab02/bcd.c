#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <assert.h>

int bcd(int bcd_value);

int main(int argc, char *argv[]) {

    for (int arg = 1; arg < argc; arg++) {
        long l = strtol(argv[arg], NULL, 0);
        assert(l >= 0 && l <= 0x0909);
        int bcd_value = l;

        printf("%d\n", bcd(bcd_value));
    }

    return 0;
}

// given a  BCD encoded value between 0 .. 99
// return corresponding integer
int bcd(int bcd_value) {

    // PUT YOUR CODE HERE
    int result = 0;

    result += bcd_value & 0x00FF;

    //result +=  bcd_value & 0xFF00;
    int finaldigit = bcd_value & 0xFF00;
    finaldigit = finaldigit >> 8;
    finaldigit *= 10;
    result += finaldigit;


    return result;
}

