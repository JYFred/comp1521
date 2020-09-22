#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <assert.h>

#define N_BCD_DIGITS 8

uint32_t packed_bcd(uint32_t packed_bcd);

int main(int argc, char *argv[]) {

    for (int arg = 1; arg < argc; arg++) {
        long l = strtol(argv[arg], NULL, 0);
        assert(l >= 0 && l <= UINT32_MAX);
        uint32_t packed_bcd_value = l;

        printf("%lu\n", (unsigned long)packed_bcd(packed_bcd_value));
    }

    return 0;
}

// given a packed BCD encoded value between 0 .. 99999999
// return the corresponding integer
uint32_t packed_bcd(uint32_t packed_bcd_value) {

    // PUT YOUR CODE HERE
    int result = 0;
    int baseTenLevel =  1;
    for(int i = 0; i < N_BCD_DIGITS; i++){
        uint32_t buffer = i *4;
        //increase buffer by 4 bytes for every new nibble 
        uint32_t mask  = ((N_BCD_DIGITS*2)-1) << buffer;
        uint32_t curr = (packed_bcd_value & mask) >> buffer;
        result += curr*baseTenLevel;
        //10 = 0001 0000 = 1 + 0
        //22 = 2 + 2  =0010 0010
        baseTenLevel*=10;
    }

    return result;
}
