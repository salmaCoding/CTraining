#include <stdio.h>

int main()
{
 /* Prototypes des fonctions appelées /
 double MIN(double X, double Y);
 double MAX(double X, double Y);
 / Variables locales /
 double A,B,C,D;
 / Traitements */
 printf("Introduire 4 réels : ");
 scanf("%lf %lf %lf %lf", &A, &B, &C, &D);
 printf("Le minimum des 4 reels est %f \n",
                                    MIN( MIN(A,B), MIN(C,D)) );
  printf("Le maximum des 4 reels est %f \n",
                                    MAX( MAX(A,B), MAX(C,D)) ); 
  return 0;
}

double MIN(double X, double Y) 
{
 if (X<Y)
     return X;
 else
     return Y;
}
 
double MAX(double X, double Y)
{
 if (X>Y)
     return X;
 else
     return Y;
}
