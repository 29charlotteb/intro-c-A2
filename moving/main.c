#include <stdio.h>
#include "mover.h"

int main(void){
    
    uint32_t boxes;
    // if unsigned integer is negative, return false
    if (scanf("%u", &boxes) != 1) { 
        return 1;
    }
    char result = choose_mover(boxes);
    return 0;
}