#include <stdio.h>
#include "mover.h"

char choose_mover(uint32_t boxes) {
    // if remainder, rounds up number of truckloads
    uint32_t alice_boxes = (boxes + 22) / 23; 
    uint32_t bob_boxes = (boxes + 29) / 30;

    // calculate cost for each option
    uint32_t alice_cost = alice_boxes * 200;
    uint32_t bob_cost = bob_boxes * 260;

    // return cheaper option 
    if (alice_cost <= bob_cost){
        return 'A';
    } else {
        return 'B';
    }
}
