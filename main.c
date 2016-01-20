#include <stdio.h>
#include "temp.h"


int main() {

    char s[10];
    float f;
    struct temperature t[4];
    int i=0;

    for(i=0;i<=4;i++) {
        read(&t);
    }
    print(&t);


    return 0;
}