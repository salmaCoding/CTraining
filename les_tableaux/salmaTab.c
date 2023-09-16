#include<stdio.h>

float moy(float Tab[],int taille){
	float moy=0;
	int i;
	for(i=0;i<taille;i++){
			printf("entrer la note %d ",i+1);
			scanf("%f",&Tab[i]);
	}
		for(i=0;i<taille;i++){
			printf("Tab[%d]=%f ",i+1,Tab[i]);
		
	}
	for(i=0;i<taille;i++){
		moy+=Tab[i];
	}
	moy/=taille;
//	printf("%f",moy);
	return moy;

}

int main(){
    float T[5];
printf("%f",moy(T,5));

	
}
