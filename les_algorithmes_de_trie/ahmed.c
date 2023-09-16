#include<stdio.h>

void trier(int* tab,int n){
int j,i,tmp;
for(i=0;i<n;i++){
	for(j=i+1;j<n;j++){
		if(tab[i]>tab[j]){
			tmp=tab[i];
			tab[i]=tab[j];
			tab[j]=tmp;
}
}
}
}
void affichertab(int* tab,int n){
int i=0;
for(i=0;i<n;i++)
	printf("%4d",tab[i]);
}
int main(){
int tab[5]={6,3,7,4,2};
trier(tab,5);
affichertab(tab,5);



}
