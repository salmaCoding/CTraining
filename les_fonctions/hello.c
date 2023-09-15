#include<stdio.h>


void affichermessage(){
printf("\nhello world\n ");


}
void afficherInformations(char nom[],char prenom[]){
printf("nom:%s prenom :%s\n",nom,prenom);

}

int multiplication(){
int a,b;
printf("\nentrer les nombre:\n");
scanf("%d %d",&a,&b);
return a*b;
}

int somme(int a,int b){
return a+b;
}

void aficherecursive(){
printf("\n entrer un nombre\n");
int n;
scanf("%d",&n);
if(n==5){
return;
}
aficherecursive();
}

int factoriel(int n){
if(n==0)
	return 1;
if(n==1)
	return 1;
return n*factoriel(n-1);

}








int main(){
aficherecursive();
int n=factoriel(4);
printf("\n**************%d**********\n",n);
return 0;
}
