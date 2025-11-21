#include <stdio.h>

int main() {
    int num1 = 10;
    int num2 = 4;
    char op = '+';

    switch (op) {
        case '+': printf("%d\n", num1 + num2); break;
        case '-': printf("%d\n", num1 - num2); break;
        case '*': printf("%d\n", num1 * num2); break;
        case '/': 
            if (num2 != 0) printf("%d\n", num1 / num2);
            else printf("Erreur : division par zero\n");
            break;
        case '%': printf("%d\n", num1 % num2); break;
        case '&': printf("%d\n", num1 & num2); break;
        case '|': printf("%d\n", num1 | num2); break;
        case '~': printf("%d\n", ~num1); break;
        default: printf("Operateur inconnu\n");
    }

    return 0;
}


