#include <stdio.h>

int main() {
    char noms[5][20] = {"Dupont", "Martin", "Durand", "Petit", "Morel"};
    char prenoms[5][20] = {"Marie", "Luc", "Anna", "Paul", "Julie"};
    char adresses[5][50] = {
        "Lyon", "Paris", "Marseille", "Nice", "Toulouse"
    };

    float noteC[5] = {12.5, 14, 11, 16.5, 10};
    float noteSE[5] = {13, 9.5, 12, 14, 11.5};

    for (int i = 0; i < 5; i++) {
        printf("Etudiant %d :\n", i + 1);
        printf("%s %s\n", prenoms[i], noms[i]);
        printf("Adresse : %s\n", adresses[i]);
        printf("C : %.2f, SE : %.2f\n\n", noteC[i], noteSE[i]);
    }

    return 0;
}
