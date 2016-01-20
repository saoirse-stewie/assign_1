//
// Created by saoirse on 15/01/2016.
//


#include <stdio.h>
#include "temp.h"

void print(struct temperature *s)
{

    char x;
    float y;
    float average;

    average = ((*s).present_temp + (*s).previous_temperature) /4;

    printf("signal name = %c, present temp = %5.2f, previous temp = %5.2f, average = %5.2f",
           (*s).signal, (*s).present_temp, (*s).previous_temperature, average);

}
void read(struct temperature *s)
{
    char n;
    float x;
    struct temperature temp;

    printf("signal name: \n");
    scanf("%c", &n);
    (*s).signal=n;
    printf("temp: \n");
    scanf("%f",&x);
    (*s).present_temp=x;
    printf("price: \n");
    scanf("%f",&x);
    (*s).previous_temperature=(*s).present_temp;
}

