#include "distance.h"

double distance_english_to_metric(Distance d){
    uint64_t total_inches = d.inches;
    total_inches += d.feet * 12;
    total_inches += d.yards * 36;
    total_inches += d.miles * 63360;

    return total_inches * 0.0254;
}
