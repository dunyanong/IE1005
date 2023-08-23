#include <stdio.h>
#include <math.h>
#define ACCELERATION 9.81

int main(void) {
    double time = 0, max_time = 4, interval = 0.5;
    double distance;

    printf("Time elapses, Distance Tavelled \n");
    printf("--------------------------------------------- \n");

    while ( time <= max_time ) {
        distance = 0.5 * ACCELERATION * time * time;
        printf("%lf , %lf \n", time, distance);

        time = time + interval;
    }



    return 0;
}