#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int ti[11];
    float tf[11];

    srand(time(NULL));

    for (int i = 0; i < 11; i++) {
        ti[i] = rand() % 100;
        tf[i] = (rand() % 1000) / 10.0;
    }

    int *pi = ti;
    float *pf = tf;

    for (int i = 0; i < 11; i++) {
        if (i % 2 == 0) *(pi + i) *= 3;
        if (i % 2 == 0) *(pf + i) *= 3;
    }

    for (int i = 0; i < 11; i++)
        printf("%d ", ti[i]);
    printf("\n");

    for (int i = 0; i < 11; i++)
        printf("%.2f ", tf[i]);
    printf("\n");

    return 0;
}
