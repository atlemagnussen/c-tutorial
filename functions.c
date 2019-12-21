#include <stdio.h>
#include "functions.h"

void print_big(int number) {
    if (number > 10) {
        printf("%d is big\n", number);
    } else {
        printf("%d is small\n", number);
    }
}
