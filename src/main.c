#include "../config.h"
#include "functions.h"
#include "morefunctions.h"

int main() {
    printf("name: %s\n", PROJECT_NAME);
    printf("version: %s\n", PROJECT_VERSION);
    print_big(10);
    print_hello("world");
    return 0;
}

