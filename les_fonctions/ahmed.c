#include <stdio.h>

double minimum(double a, double b) {
    if (a < b) {
        return a;
    } else {
        return b;
    }
}

double maximum(double a, double b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}

int main() {
      double num1, num2, num3, num4;
    
    printf("Entrez quatre nombres réels (num1 num2 num3 num4) : ");
    scanf("%lf %lf %lf %lf", &num1, &num2, &num3, &num4);
    
    double min1_2 = minimum(num1, num2);
    double max1_2 = maximum(num1, num2);
    
    double min3_4 = minimum(num3, num4);
    double max3_4 = maximum(num3, num4);
    
    double min_total = minimum(min1_2, min3_4);
    double max_total = maximum(max1_2, max3_4);
    
    printf("Le minimum parmi les quatre nombres est : %lf\n", min_total);
    printf("Le maximum parmi les quatre nombres est : %lf\n", max_total);   
    printf("Entrez deux nombres réels : ");
    scanf("%lf %lf", &num1, &num2);
    
    double min = minimum(num1, num2);
    double max = maximum(num1, num2);
    
    printf("Le minimum est : %lf\n", min);
    printf("Le maximum est : %lf\n", max);
    
    return 0;
}
