#include <stdio.h>

int main(void) {
    
    int n;

    
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    
    double sum = 0;
    for (int i = 1; i <= n; i++) {
        double term = 1.0 / i;
        sum += term;
        printf("1/%d + ", i);
    }

    
    printf("\b\b  = %.2lf\n", sum);

    return 0;
}
