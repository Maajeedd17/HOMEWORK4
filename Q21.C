#include <stdio.h>
#include <math.h>

int main(void) {
    
    int n;

    
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    
    double sum = 0;
    for (int i = 0; i < n; i++) {
        double term = pow(11, i);
        sum += term;
    }

   
    printf("The sum of the series is: %.0lf\n", sum);

    return 0;
}
