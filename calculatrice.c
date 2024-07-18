#include <stdio.h>

int main() {
    float a, b;
    int x;

    printf("Veuillez entrer votre premier nombre : ");
    scanf("%f", &a);
    printf("Veuillez entrer votre deuxième nombre : ");
    scanf("%f", &b);

    printf("----------Choix---------\n");
    printf("Choix 1: Addition\n");
    printf("Choix 2: Soustraction\n");
    printf("Choix 3: Multiplication\n");
    printf("Choix 4: Division\n");
    printf("Choix 5: Reste de la division euclidienne\n");
    printf("Veuillez entrer votre choix : ");
    scanf("%d", &x);

    switch (x) {
        case 1:
            printf("%1.f + %1.f = %1.f\n", a, b, a + b);
            break;
        case 2:
            printf("%1.f - %1.f = %1.f\n", a, b, a - b);
            break;
        case 3:
            printf("%1.f * %1.f = %1.f\n", a, b, a * b);
            break;
        case 4:
            if (b == 0)
                printf("Division par zéro impossible\n");
            else
                printf("%1.f / %1.f = %1.f\n", a, b, a / b);
            break;
        case 5:
            if (b == 0)
                printf("Division par zéro impossible\n");
            else
                printf("Le reste de %1.f / %1.f = %1.f\n", a, b, fmod(a, b));
            break;
        default:
            printf("Choix invalide\n");
            break;
    }

    return 0;
}
