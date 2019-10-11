#include <stdio.h>

typedef struct {
    int x;
    int y;
} point;

void move(point * p);

int main() {
    // struct point {
    //     int x;
    //     int y;
    // };
    
    // struct point p;
    // p.x = 10;
    // p.y = 5;
    // printf("%d, %d\n", p.x, p.y);

    // This is cumbersome, so we use typedef instead


    // Instead of struct point p;
    point other_p;

    typedef struct {
        char * brand;
        int model;
    } vehicle;

    vehicle mycar;
    mycar.brand = "Ford";
    mycar.model = 2007;

    printf("My car is a %d %s\n", mycar.model, mycar.brand);



}

void move(point * p) {
    // This is syntax sugar for (*p).x++
    p->x++;
    p->y++;
}