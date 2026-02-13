#ifndef DISTANCE_H
#define DISTANCE_H

#include <stdint.h>

typedef struct Distance {
    uint64_t inches;
    uint64_t feet;
    uint64_t yards;
    uint64_t miles;
} Distance;

double distance_english_to_metric(Distance d);

#endif 