#include<stdio.h>
#include<stdlib.h>
#include<math.h>

typedef struct{
	char nom[10];
	int age;
	
}Personne;

typedef struct{
	int x;
	int y;
}Point;

typedef struct{
	char nom[10];
	float salaireHor;
	int nbrHeures;
	float salaireT;
}Employe;

typedef struct{
	char nom[10];
	int age;
	
}Etudiant;

int main(){
	
	int a ;
	printf("entrer le nombre de challenge de 1 jusqu a 3:");
	scanf("%d",&a);
	switch(a){
		case 1:	//challenge 1
	Personne pers;
	printf("donner le nom du personne :");
	scanf("%s",pers.nom);
	printf("donner son age :");
	scanf("%d",&pers.age);
	//Affichage	
	printf("------------------\n");
    printf("votre nom est :%s\n",pers.nom);
	printf("ton age est :%d\n",pers.age);
        break ;
        
    case 2:
    			//challenge 2
	
	Point p1,p2;
	printf("donner la distance du point1 :");
	scanf("%d %d",&p1.x,&p1.y);
		printf("donner la distance du point2 :");
	scanf("%d	%d",&p2.x,&p2.y);	
	printf("la distance euclidienne est:\n");
	 int dist=sqrt((p2.x-p1.x)^2+(p2.y-p1.y)^2);
	 	 printf("%d",dist);
        break;
    
	case 3:

	Employe emp;
	printf("donner le nom de l'employe :");
	scanf("%s",emp.nom);
		printf("donner son salaire horaire :");
	scanf("%f",&emp.salaireHor);
	
		printf("donner le nombre d heures de travaille :");
	scanf("%d",&emp.nbrHeures);
	
	//affichage
	emp.salaireT=emp.nbrHeures*emp.salaireHor;
	printf("le nom de l employe %s ",emp.nom);
	printf("son salaire total est %.2f",emp.salaireT);
           break;
    
    case 4:
    	Etudiant Et[5];
int i;
for(i=0;i<5;i++){
	printf("donner le nom de l etudiant %d: ",i+1);
	scanf("%s",Et[i].nom);
	
	printf("donner l age de l etudiant %d:",i+1);
	scanf("%d",&Et[i].age);
	printf("etudiant ajouté avec succes \n");
	
}	
	printf("---------------------------\n");
	printf("liste des etudiants \n");
	for(i=0;i<5;i++){
		printf("%d.Nom:%s  age:%d \n",i+1,Et[i].nom,Et[i].age);
	}
	 break;
	}
}
