#include <stdio.h>

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Please enter a non-negative integer.\n");
        return 0;  
    }

    printf("Numbers from 1 to %d:\n", n);

    for (int i = 1; i <= n; i++) {
        printf("%d ", i);
    }

    printf("\n");

    return 0;  
}
