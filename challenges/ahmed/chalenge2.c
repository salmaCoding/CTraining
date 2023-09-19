#include<stdio.h>
#include<math.h>
typedef struct {
double x;
double y;
}point;

point Saisir(){
point p;
printf("\nEntrez les coordonnees du premiere point:");
scanf("%lf %lf",&p.x,&p.y);
return p;
}

double distance(point p1,point p2){
return sqrt(pow(p1.x-p2.x,2)+pow(p1.y-p2.y,2));
}

int main(){
point p1,p2;
p1=Saisir();
p2=Saisir();
printf("\nla distance entre les points est:%lf",distance(p1,p2));

}
