#include <stdio.h>

typedef struct{
    char nom[100];
    int age;
}Personne;

typedef struct {
    float x;
    float y;
}Point;

typedef struct {
    char nom[50];
    double salaireHoraire;
    double heuresTravaillees;
}Employe;

typedef struct {
    char nom[50];
    int age;
}Etudiant;

int main() {
    int t;
	printf("Choisir 1 ou 2 ou 3 ou 4\n");
	scanf("%d",&t);
	
	switch(t){
        case 1 :
// challenge 1
    Personne per;

    printf("Entrez le nom : ");
    scanf("%s",&per.nom);

    printf("Entrez l'âge : ");
    scanf("%d", &per.age);

    printf("Nom : %s\n", per.nom);
    printf("Âge : %d ans\n", per.age);
    break;
        case 2 :
//challenge 2
Point a,b;
printf("Entrez les coordonnées du premier point (x1 y1) :\n");
scanf("%f%f",&a.x,&a.y);
printf("Entrez les coordonnées du deuxième point (x2 y2) :\n")
scanf("%f%F",&b.x,&b.y);
 double distance = sqrt(pow(point2.x - point1.x, 2) + pow(point2.y - point1.y, 2));
 printf("La distance entre les points est : %lf\n", distance);
    break;
 //challenge 3
        case 3 :
    Employe employe;

    printf("Entrez le nom de l'employé : ");
    scanf("%s", employe.nom);

    printf("Entrez le salaire horaire : ");
    scanf("%f", &employe.salaireHoraire);

    printf("Entrez le nombre d'heures travaillées : ");
    scanf("%f", &employe.heuresTravaillees);

    double salaireTotal = employe.salaireHoraire * employe.heuresTravaillees;

    printf("Nom de l'employé : %s\n", employe.nom);
    printf("Salaire total : %.2lf\n", salaireTotal);
        break;
    case 4 :
//challenge 4

    struct Etudiant etudiants[5];
    int nombreEtudiants = 0; 

    printf("Bienvenue dans le gestionnaire d'étudiants!\n");

    while (nombreEtudiants < 0 || nombreEtudiants > 5) {
        printf("\nEntrez le nom de l'étudiant : ");
        scanf("%s", &etudiants[nombreEtudiants].nom);

        printf("Entrez l'âge de l'étudiant : ");
        scanf("%d", &etudiants[nombreEtudiants].age);

        printf("Étudiant ajouté avec succès!\n");

        nombreEtudiants++;
    }
    printf("\nListe des étudiants :\n");
    for (int i = 0; i < nombreEtudiants; i++) {
        printf("%d. Nom : %s, Âge : %d\n", i + 1, etudiants[i].nom, etudiants[i].age);
    }
    break;
    default : printf("Error");
    }
    return 0;
}
