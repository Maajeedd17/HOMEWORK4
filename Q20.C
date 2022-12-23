#include <stdio.h>
#include <math.h>

int main(void) {
    
    double x, sum = 0;

    
    printf("Enter the value of X: ");
    scanf("%lf", &x);

    
    for (int n = 0; n < 10; n++) {
        double term = pow(-1, n) * pow(x, 2*n+1);
        sum += term;
    }

   
    printf("The sum of the series is: %.2lf\n", sum);

    return 0;
}
