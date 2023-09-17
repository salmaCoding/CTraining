#include<stdio.h>
#include<string.h>

/* fonction power */
float pow(float a)
{
	return a*a;
}

/* fonction qui calcule la racine carrée d'un nombre */
float sqrt(float X)
{
  float A,B,M,Y;
  if(X==0.0) {
     return 0.0;
  } else {
     M=1.0;
     Y=X;
     while(Y>=2.0) {
        Y=0.25*Y;
        M=2.0*M;
     }
     while(Y<0.5) {
        Y=4.0*Y;
        M=0.5*M;
     }
     A=Y;
     B=1.0-Y;
     do {
        A=A*(1.0+0.5*B);
        B=0.25*(3.0+B)*B*B;
     } while(B>=1.0E-15);
     return A*M;
  }
}

int main(){
	float a,b;
	char op[10], p[]="pow", q[]="sqrt";
	
	while(1){	
	printf("\nEntrez un operateur (+, -, *, /, pow, sqrt), si vous voulez quitter, appuyez sur x:\n");
	scanf("%s",&op);
	if(op[0]=='x')
	break;
	if(strcmp(op,p)==0)
	{
		printf("\nEntrez un nombre :\n");
		scanf("%f",&a);
		printf("Pow de %f est : %.2f\n",a,pow(a));
		continue;
	}
	else if(strcmp(op,q)==0){
		printf("\nEntrez un nombre :\n");
		scanf("%f",&a);
		printf("sqrt de %f est : %.2f\n",a,sqrt(a));
		continue;	
	}
	else{
	printf("\nEntrez deux premier et deuxieme operandes \n");
	scanf("%f%f",&a,&b);
	switch(op[0])
	{
		case '+': printf("%f + %f = %.2f",a,b,a+b); break;
		case '-': printf("%f - %f = %.2f",a,b,a-b); break;
		case '*': printf("%f * %f = %.2f",a,b,a*b); break;
		case '/': printf("%f / %f = %.2f",a,b,a/b); break;
		default : printf("Entree erronee"); 
	}
       }

}
}
