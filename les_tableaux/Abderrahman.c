#include <stdio.h>

int main() {
    
    float notes[5];

    float somme = 0.0;
    float moyenne;

    for (int i = 0; i < 5; i++) {
        printf("Saisissez la note de l'étudiant %d : ", i + 1);
        scanf("%f", &notes[i]);
        somme += notes[i];
    }
    moyenne = somme / 5.0;

    printf("La moyenne de classe est : %.2f\n", moyenne);

    return 0;
}
