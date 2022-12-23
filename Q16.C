#include <stdio.h>
#include <math.h>

int main(void) {
    
    double x, sum = 0;

    
    printf("Enter the value of X: ");
    scanf("%lf", &x);

    
    for (int n = 0; n < 10; n++) {
        double term = pow(-1, n) * pow(x, 2*n) / factorial(2*n);
        sum += term;
    }

    
    printf("The sum of the series is: %.2lf\n", sum);

    return 0;
}


int factorial(int n) {
    int result = 1;
    for (int i = 2; i <= n; i++) {
        result *= i;
    }
    return result;
}
