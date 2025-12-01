#include <stdio.h>

int main() {
    char c = 1; short s = 2; int i = 3; long l = 4;
    long long ll = 5; float f = 6.0; double d = 7.0; long double ld = 8.0;

    char *pc = &c;
    short *ps = &s;
    int *pi = &i;
    long *pl = &l;
    long long *pll = &ll;
    float *pf = &f;
    double *pd = &d;
    long double *pld = &ld;

    printf("Avant : %p %x\n", pi, i);

    *pi = 45;

    printf("Après : %p %x\n", pi, i);

    return 0;
}
