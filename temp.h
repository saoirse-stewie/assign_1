//
// Created by saoirse on 15/01/2016.
//

#ifndef ASSIGN_1_TEMP_H
#define ASSIGN_1_TEMP_H


struct temperature{

    char signal;
    float previous_temperature;
    float present_temp;
    void (*ptr)(char *);

};

void print(struct temperature *s);
void read(struct temperature *s);


#endif //ASSIGN_1_TEMP_H


