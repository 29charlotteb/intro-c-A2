#ifndef DAY_H
#define DAY_H

enum Day {
    Sunday = 1, 
    Monday, 
    Tuesday,
    Wednesday, 
    Thursday, 
    Friday, 
    Saturday
} ;

void weekday(char* characters, enum Day numerical);

#endif