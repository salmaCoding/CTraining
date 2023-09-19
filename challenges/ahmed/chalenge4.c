#include<stdio.h>
#include<stdlib.h>

typedef struct{
	char nom[20];
	int age;
}etudiant;

etudiant saisir(){
	etudiant e;
	printf("\nnom:");
	scanf("%s",e.nom);
	printf("age :");
	scanf("%d",&e.age);
	return e;
}
etudiant* ajoutEtudiant(etudiant *e,int n){
	etudiant* b=(etudiant*)malloc((n)*sizeof(etudiant));
	int i;
	for(i=0;i<n;i++)
		b[i]=saisir();
	return b;
}
void afficheretudiant(etudiant e){
	printf("\nnom:%s",e.nom);
	printf("\nage :%d",e.age);
}
void afficher(etudiant* e,int n){
	int i;
	for(i=0;i<n;i++)
		afficheretudiant(e[i]);
}

int main(){
	etudiant *e=ajoutEtudiant(e,5);
	int i;
	afficher(e,5);
	
}
