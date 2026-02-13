#include <stdio.h>
#include "distance.h"

int main(){
    Distance d; 
    if (scanf("%lu %lu %lu %lu", &d.inches, &d.feet, &d.yards, &d.miles) != 4){
        return 1;
    }
    double result = distance_english_to_metric(d);
    return 0;
}