#include <stdio.h>
/* define a local variable a */
typedef struct {
    int x;
    int y;
} point2;

void print_ref(point2 * p);

int main() {
    int a = 1;

    /* define a pointer variable, and point it to a using the & operator */
    int * pointer_to_a = &a;

    printf("The value a is %d\n", a);
    printf("The value of a is also %d\n", *pointer_to_a);

    a += 1;
    printf("The value a is now %d\n", a);
    printf("The value of a is also %d\n", *pointer_to_a);

    *pointer_to_a += 1;
    printf("The value a is now %d\n", a);
    printf("The value of a is also %d\n", *pointer_to_a);
    
    point2 p2;
    p2.x = 20;
    p2.y = 10;
    
    print_ref(&p2);
    
    return 0;
}

void print_ref(point2 * p) {
    printf("by ref x2=%d y2=%d\n", (*p).x, (*p).y);
    // shorthand
    printf("by ref shorthand x2=%d y2=%d\n", p->x, p->y);
}
