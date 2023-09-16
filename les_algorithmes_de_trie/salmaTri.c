#include<stdio.h>

void Tab(int Tab[],int taille){

	int i;
	for(i=0;i<taille;i++){
			printf("entrer la note %d ",i+1);
			scanf("%d",&Tab[i]);
	}
//		for(i=0;i<taille;i++){
//			printf("Tab[%d]=%d",i+1,Tab[i]);
//		
//	}


}
void affichage(int Tab[],int taille){
    int i;
			for(i=0;i<taille;i++){
			printf("%d  ",Tab[i]);
		
	}
}

void sort(int tab[],int taille){
	int i,j;
	int o;
	for(i=0;i<taille-1;i++){
		for(j=0;j<taille-i-1;j++){
			if(tab[j]>tab[j+1]){
				o=tab[j+1];
				tab[j+1]=tab[j];
				tab[j]=o;
			}
			
		}
	}
}

int main(){
 int taille;
 int T[taille];
 printf("entrer la taille du tableau :");
 scanf("%d",&taille);
 	Tab(T,taille);
//  	affichage(sort(Tab(T,taille)));
sort(T,taille);
affichage(T,taille);
}
