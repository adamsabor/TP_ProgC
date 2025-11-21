#include <stdio.h>

int main() {
    char c = 'A';
    unsigned char uc = 200;

    short s = -123;
    unsigned short us = 50000;

    int i = -500;
    unsigned int ui = 4000;

    long int li = -90000;
    unsigned long int uli = 90000;

    long long int lli = -123456789;
    unsigned long long int ulli = 123456789;

    float f = 3.14f;
    double d = 2.71828;
    long double ld = 1.23456789012345L;

    printf("%c , %u\n", c, uc);
    printf("%d , %u\n", s, us);
    printf("%d , %u\n", i, ui);
    printf("%ld , %lu\n", li, uli);
    printf("%lld , %llu\n", lli, ulli);
    printf("%f\n", f);
    printf("%f\n", d);
    printf("%Lf\n", ld);

    return 0;
}
