#include <stdio.h>

int main() {
    int d = 0x00110000;
    int bit4 = (d >> 27) & 1;   // 4ème bit de gauche (bit 27)
    int bit20 = (d >> 11) & 1;  // 20ème bit de gauche (bit 11)

    if (bit4 == 1 && bit20 == 1)
        printf("1\n");
    else
        printf("0\n");

    return 0;
}
