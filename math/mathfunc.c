#include <stdio.h>
#include <time.h>
#include <math.h>
#include <stdlib.h>

#define LOOPS 1000000
#define COUNT 100

int main(void)
{
    double doubles[COUNT];
    double sine, cosine, tangent, logrithm, squareroot;
    clock_t start, end;

    for (int i = 0; i < COUNT; i++)
        doubles[i] = (float) rand() / (float) rand();
    // for (int i = 0; i < COUNT; i++)
    //     printf("%g\n", doubles[i]);

    start = clock();
    for (int t = 0; t < LOOPS; t++)
        for (int i = 0; i < COUNT; i++)
            squareroot = sqrt(doubles[i]);
    end = clock();
    printf("sqrt %0.6f\n", (float) (end - start) / (float) CLOCKS_PER_SEC);

    start = clock();
    for (int t = 0; t < LOOPS; t++)
        for (int i = 0; i < COUNT; i++)
            sine = sin(doubles[i]);
    end = clock();
    printf("sin %0.6f\n", (float) (end - start) / (float) CLOCKS_PER_SEC);

    start = clock();
    for (int t = 0; t < LOOPS; t++)
        for (int i = 0; i < COUNT; i++)
            cosine = cos(doubles[i]);
    end = clock();
    printf("cos %0.6f\n", (float) (end - start) / (float) CLOCKS_PER_SEC);

    start = clock();
    for (int t = 0; t < LOOPS; t++)
        for (int i = 0; i < COUNT; i++)
            tangent = tan(doubles[i]);
    end = clock();
    printf("tan %0.6f\n", (float) (end - start) / (float) CLOCKS_PER_SEC);

    start = clock();
    for (int t = 0; t < LOOPS; t++)
        for (int i = 0; i < COUNT; i++)
            logrithm = log(doubles[i]);
    end = clock();
    printf("log %0.6f\n", (float) (end - start) / (float) CLOCKS_PER_SEC);

    start = clock();
    for (int t = 0; t < LOOPS; t++)
        for (int i = 0; i < COUNT; i++)
            logrithm = log10(doubles[i]);
    end = clock();
    printf("log10 %0.6f\n", (float) (end - start) / (float) CLOCKS_PER_SEC);
} /* main */
