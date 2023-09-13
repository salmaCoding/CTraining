#include<stdio.h>
int main(){
char c;
printf("\n entrer le caratere + ou - ou * ou / pour faire une operation\n");
scanf("%c",&c);
int a,b;
printf("\nsaisir les nombres pour l'operation:\n");
scanf("%d %d",&a,&b);
switch(c){
	case '+':
		printf("somme de %d + %d =%d",a,b,a+b);
		break;
	case '-':
                printf("soustraction de %d + %d =%d",a,b,a-b);
		break;
	case '*':
                printf("multiplication de %d + %d =%d",a,b,a*b);
		break;
	case '/':
                printf("division de %d + %d =%d",a,b,a/b);
		break;
	default:
		printf("erreur 404");
}
}




