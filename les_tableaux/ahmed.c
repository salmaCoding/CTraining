#include<stdio.h>
float moyen(int tab[],int taille){
int i;
int moyenne=0;
for(i=0;i<taille;i++)
	moyenne+=tab[i];
return moyenne/taille;
}

void stocker(int tab[],int n){
printf("\nentrer les notes des etudiants\n");
for(int i=0;i<n;i++)
	scanf("%d",&tab[i]);
}

int main(){

int n;
printf("\nentrer la taille de tableaux\n");
scanf("%d",&n);
int tab[n];
stocker(tab,n);
float moy=moyen(tab,n);
printf("le moyenne de class est %f\n",moy);


}
