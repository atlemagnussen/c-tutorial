#include <stdio.h>
struct point {
    int x;
    int y;
};

typedef struct {
    char * brand;
    int model;
} vehicle;

int main() {
    struct point p;
    p.x = 10;
    p.y = 5;

    printf("x=%d y=%d\n", p.x, p.y);
    
    vehicle mycar;
    mycar.brand = "Ford";
    mycar.model = 2007;

    printf("mycar %s, %d\n", mycar.brand, mycar.model);
}

