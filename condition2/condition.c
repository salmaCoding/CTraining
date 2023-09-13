#include<stdio.h>

int main(){
        float nt1,nt2,nt3,nt4,som=0;

printf("entrer  note de 4 matieres");
scanf("%f , %f , %f , %f",&nt1,&nt2,&nt3,&nt4);
som=(nt1+nt2+nt3+nt4)/4;
if(som>=10){
        printf("valid▒");

}else if(som>6){
        printf("ratrappage");
}else{
        printf("a referer a");
}
}
