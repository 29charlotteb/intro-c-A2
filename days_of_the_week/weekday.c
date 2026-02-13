#include "weekday.h"

void weekday(char* characters, enum Day numerical){

    const char* day_names[] = {
        "", 
        "Sunday",
        "Monday",
        "Tuesday",
        "Wednesday",
        "Thursday",
        "Friday",
        "Saturday"
    };

    const char* input_string = day_names[numerical];

    int i = 0;
    while (input_string[i] != '\0') {
        characters[i] = input_string[i];
        i++;
    }
    characters[i] = '\0';
}