#include<stdio;h>
int main(){
int somme=0,i=1,n
printf("entrer un nombre pour calculer la somme de 1 jusqua ce nombre\n");
scanf("%d",&n);
while(i++<=n)somme+=i;
printf("la somme de 1 jusqu'a%d est %d",n,somme);
}
