#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char * name;
    int age;
} person;

int main() {
    person * myperson = malloc(sizeof(person));
    myperson->name = "John";
    myperson->age = 27;

    printf("name '%s', age '%d'\n", myperson->name, myperson->age);

    free(myperson);
    printf("name '%s', age '%d'\n", myperson->name, myperson->age);

    return 0;
}
