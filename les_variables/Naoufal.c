#include<stdio.h>
#include<stdbool.h>
int main(){
int age=20;
float poid=60.45;
double size=1.349485;
bool est_homme=true;
char nom[]="You";
char prenom[]="Code";
char sexe='M';
printf("\n%s  %s \n ",nom,prenom);
printf("\nage=%d,poid=%f,size=%f,sexe=%c\n",age,poid,size,sexe);

float nt1,nt2,nt3,nt4,som=0;

printf("entrer  note de 4 matieres");
scanf("%f , %f , %f , %f",&nt1,&nt2,&nt3,&nt4);
som=(nt1+nt2+nt3+nt4)/4;
if(som>=10){
	printf("validé");
	
}else if(som>6){
	printf("ratrappage");
}else{
	printf("a referer");
}










}
