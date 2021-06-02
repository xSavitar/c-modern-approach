//
// Created by Derick Alangi on 5/31/21.
//

/* Determines the length of a message */

#include <stdio.h>

int main(void) {
    int len = 0;

    printf("Enter a message: ");
    while (getchar() != '\n')
        len++;
    printf("Your message was %d character(s) long.\n", len);

    return 0;
}