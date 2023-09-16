#include<stdio.h>

void Tab(float Tab[],int taille){
	float moy=0;
	int i;
	for(i=0;i<taille;i++){
			printf("entrer la note %d ",i+1);
			scanf("%f",&Tab[i]);
	}
		for(i=0;i<taille;i++){
			printf("Tab[%d]=%f ",i+1,Tab[i]);
		
	}


}
float moy(float Tab[],int taille){
	float moy=0;
	int i;
	for(i=0;i<taille;i++){
		moy+=Tab[i];	
	}
moy/=taille;
	
}

int main(){
	 int taille;
    float T[taille];
   
    printf("entrer la taille du tableaux\n");
    scanf("%d",&taille);
    
    Tab(T,taille);
    printf("%f",moy(T,taille));


	
}
