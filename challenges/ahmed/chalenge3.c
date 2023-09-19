#include<stdio.h>
#include<stdlib.h>

typedef struct{
	char nom[20];
	double prixHoraire;
	double nbHeure;
}Employe;



Employe Saisir(){
	Employe E;
	printf("\nEntrez le nom de l'employé : \n");
	scanf("%s" ,E.nom);
	printf("\nEntrez le nombre d'heures travaillées : \n");
	scanf("%lf" ,&E.nbHeure);
	printf("\nEntrez le salaire horaire : \n");
	scanf("%lf" ,&E.prixHoraire);
	return E;
}

double salaireTotal(Employe E){
	return E.nbHeure*E.prixHoraire;
}

int main(){
	Employe E=Saisir();
	printf("\nNom de l'employé : %s",E.nom);
	printf("Salaire total :%lf",salaireTotal(E));
}
