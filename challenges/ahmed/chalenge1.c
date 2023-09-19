#include<stdio.h>
#include<stdlib.h>
typedef struct{
char nom[20];
int age;
}personne;

personne saisirInformation(){
	personne p;
	printf("Entrez le nom:");
	scanf("%s",p.nom);
	printf("\nEntrez l'age:");
	scanf("%d",&p.age);
	return p;
}

void afficherInformations(personne p){
printf("\nNom:%s\n",p.nom);
printf("\nAge:%d",p.age);
}


int main(){
personne p;
p=saisirInformation(p);
afficherInformations(p);

}
