#include <stdio.h>
#include <math.h>

int main() {
    double rayon = 6.0;       // valeur du rayon
    double pi = M_PI;         // ou 3.14159 si tu préfères
    
    double aire = pi * rayon * rayon;
    double perimetre = 2 * pi * rayon;

    printf("Aire du cercle : %f\n", aire);
    printf("Perimetre du cercle : %f\n", perimetre);

    return 0;
}
