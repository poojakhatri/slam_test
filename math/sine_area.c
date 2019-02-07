#include <stdio.h>
#include <math.h>

#define LIMIT 1000000000

int main(int argc, char * argv[])
{
    double area  = 0.0;
    double delta = M_PI / LIMIT;

    for (int i = 0; i < LIMIT; i++) {
        double x = i * delta + delta / 2.0;
        double y = sin(x);

        area += y * delta;
    }
    printf("%s\t%0.20f\n", argv[0], area);
}
