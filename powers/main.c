#include <stdio.h>
#include "powers.h"

int main(void){
    uint32_t n;
    if (scanf("%u", &n) != 1){
        return 1;
    }
    uint32_t result = powers(n);

    return 0;
}