#include <stdio.h>
#include <string.h>

struct Etudiant {
    char nom[20];
    char prenom[20];
    char adresse[50];
    float note1;
    float note2;
};

int main() {
    struct Etudiant e[5];

    strcpy(e[0].nom, "Dupont");
    strcpy(e[0].prenom, "Marie");
    strcpy(e[0].adresse, "Lyon");
    e[0].note1 = 16.5; e[0].note2 = 12.1;

    strcpy(e[1].nom, "Martin");
    strcpy(e[1].prenom, "Pierre");
    strcpy(e[1].adresse, "Paris");
    e[1].note1 = 14.0; e[1].note2 = 14.1;

    strcpy(e[2].nom, "Durand");
    strcpy(e[2].prenom, "Luc");
    strcpy(e[2].adresse, "Nice");
    e[2].note1 = 11.5; e[2].note2 = 10.0;

    strcpy(e[3].nom, "Petit");
    strcpy(e[3].prenom, "Anna");
    strcpy(e[3].adresse, "Lille");
    e[3].note1 = 13.0; e[3].note2 = 15.0;

    strcpy(e[4].nom, "Morel");
    strcpy(e[4].prenom, "Julie");
    strcpy(e[4].adresse, "Toulouse");
    e[4].note1 = 12.0; e[4].note2 = 11.0;

    for (int i = 0; i < 5; i++) {
        printf("Etudiant %d :\n", i + 1);
        printf("%s %s\n", e[i].prenom, e[i].nom);
        printf("Adresse : %s\n", e[i].adresse);
        printf("Note1 : %.2f, Note2 : %.2f\n\n", e[i].note1, e[i].note2);
    }

    return 0;
}
