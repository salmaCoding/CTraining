#include <stdio.h>
int main(){
 /* Afficher le signe du produit de deux entiers sans
    faire la multiplication
 */
 int A, B;
 printf("Introduisez deux nombres entiers :");
 scanf("%i %i", &A, &B);
 if ((A>0 && B>0) || (A<0 && B<0))
   printf("Le signe du produit %i * %i est positif\n", A, B);
 else if ((A<0 && B>0) || (A>0 && B<0))
   printf("Le signe du produit %i * %i est négatif\n", A, B);
 else
   printf("Le produit %i * %i est zéro\n", A, B);
  return (0);
}
