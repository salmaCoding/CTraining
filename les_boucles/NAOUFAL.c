#include <stdio.h>
int main()
{
 int N;       /* nombre de données */
 int NOMB;    /* nombre courant    */
 int I;       /* compteur */
 long SOM;    /* la somme   des nombres entrés */
 double PROD; /* le produit des nombres entrés */

 printf("Nombre de données : ");
 scanf("%d", &N);

 SOM=0;
 PROD=1;
 I=1;
 while(I<=N)
    {
     printf("%d. nombre : ", I);
     scanf("%d", &NOMB);
     SOM  += NOMB;
     PROD *= NOMB;
     I++;
    }
 
 printf("La somme   des %d nombres est %ld \n", N, SOM);
 printf("Le produit des %d nombres est %.0f\n", N, PROD);
 printf("La moyenne des %d nombres est %.4f\n", N, (float)SOM/N);
 return 0;
}
