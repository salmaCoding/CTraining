#include<stdio.h>
#include<string.h>
#include<math.h>
typedef struct{
	char nom[100];
	int age;
}Personne;

typedef struct{
	float x;//Abscisses
	float y;//Ordonnées
}Point;

typedef struct{
	char nom[100];
	float salaire;
	int h;
}Employe;

typedef struct{
	char nom[100];
	int age;
}Etudiant ;

int main(){
	int ch;
	printf("Quel challenge tu veux exécuter 1 ou 2 ou 3 ou 4\n");
	scanf("%d",&ch);
	
	switch(ch){
	case 1 : //Challenge 1
	Personne per;
	printf("Entrez le nom :\n");
	fflush(stdin);
	gets(per.nom);
	printf("Entrez l'âge :\n");
	scanf("%d",&per.age);
	printf("Nom : %s\n",per.nom);
	printf("Âge : %d\n",per.age);
	break;
	
	case 2 : //Challenge 2
	Point a,b;
	printf("Entrez les coordonnées du premier point (x1 , y1) :\n");
	scanf("%f%f",&a.x,&a.y);
	printf("Entrez les coordonnées du deuxième point (x2 , y2) :\n");
	scanf("%f%f",&b.x,&b.y);	
	printf("La distance entre les points est : %.2f\n",sqrt(pow(b.x-a.x,2)+pow(b.y-a.y,2)));
	break;
	case 3:	//Challenge 3
	Employe a1;
	printf("Entrez le nom de l'employe :\n");
	fflush(stdin);
	gets(a1.nom);
	printf("Entrez le salaire horaire : \n");
	scanf("%f",&a1.salaire);
	printf("Entrez le nombre d'heures travaillées :\n");
	scanf("%d",&a1.h);
	printf("Nom de l'employé : %s\n",a1.nom);
	printf("Salaire total :%f",a1.h*a1.salaire);
	break;
	
	case 4: //Challenge 4
	Etudiant etd[5];
	int i,n;
	printf("Bienvenue dans le gestionnaire d'étudiants!\n");
	do{
	printf("Combien d'étudienne tu veux ajouter :\n");
	scanf("%d",&n);
	}while(n<0 || n>5);
	for(i=0;i<n;i++){
		printf("Entrez le nom de l'étudiant :\n");
		fflush(stdin);
		gets(etd[i].nom);
		printf("Entrez l'age de l'etudiant :\n");
		scanf("%d",&etd[i].age);
		printf("etudiant ajoute avec succes!\n");
	}
	printf("Liste des étudiants :");
	for(i=0;i<n;i++){
		printf("Nom : %s, Age : %d",etd[i].nom,etd[i].age);
		
	}
	break;
	default : printf("Entree erronee"); 
	}	
	return 0;
	
	
}
