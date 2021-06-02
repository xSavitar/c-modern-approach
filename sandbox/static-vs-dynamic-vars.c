//
// Created by Derick Alangi on 6/2/21.
//

/* A program to see the effect of making a variable static */

#include <stdio.h>

void static_variable();
void dynamic_variable();

int main(void) {
    static_variable();    /* Called first time */
    static_variable();    /* Called again to see if storage location is the same */

    printf("\n");

    dynamic_variable();   /* Called the first time */
    dynamic_variable();   /* Called again to see if storage location is different */

    return 0;
}

void static_variable() {
    static int sv = 0;
    printf("The memory location of static variable is: %p\n", &sv);
    return;
}

void dynamic_variable() {
    int dv = 1;
    printf("The memory location of dynamic variable is: %p\n", &dv);
    return;
}