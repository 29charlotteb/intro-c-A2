#include "powers.h"

uint32_t powers(uint32_t n){
    uint32_t count = 0;

    for (uint32_t i = 2; i <= n; i++){
        uint32_t product = i * i;
        for (uint32_t j = 2; product <= n; j++){
            count++;
            product *= i;
        }
    }

    return count;
}
