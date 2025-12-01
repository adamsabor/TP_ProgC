#include <stdio.h>

int main() {
    char s1[50] = "Hello";
    char s2[50] = " World!";
    char copie[50];
    int i = 0;

    while (s1[i] != '\0') i++;
    printf("Longueur = %d\n", i);

    int j = 0;
    while (s1[j] != '\0') {
        copie[j] = s1[j];
        j++;
    }
    copie[j] = '\0';

    int k = 0;
    while (s1[k] != '\0') k++;

    int x = 0;
    while (s2[x] != '\0') {
        s1[k + x] = s2[x];
        x++;
    }
    s1[k + x] = '\0';

    printf("Copie : %s\n", copie);
    printf("Concat : %s\n", s1);

    return 0;
}
