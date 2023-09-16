#include<stdio.h>

int main()
{
        float A[5],som;

        for(int i=0;i<5;i++)
        {
                printf("Donner moi la note detudiant %d : \n", i+1);
                scanf("%f", &A[i]);
                som+=A[i];
        }
        float moy = som/5;
        printf("La moyenne de de classe est : %.2f \n ",moy);
}
