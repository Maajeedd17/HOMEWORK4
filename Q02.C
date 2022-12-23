#include <stdio.h>
#include <math.h>

int main(void) {
    

    double a, b, c;

    
    printf("Enter the value of a: ");
    scanf("%lf", &a);
    printf("Enter the value of b: ");
    scanf("%lf", &b);
    printf("Enter the value of c: ");
    scanf("%lf", &c);

    
    double discriminant = b * b - 4 * a * c;
    if (discriminant > 0) {
        
        double root1 = (-b + sqrt(discriminant)) / (2 * a);
        double root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("The roots of the equation are: %.2f and %.2f\n", root1, root2);
    } else if (discriminant == 0) {
        
        double root = -b / (2 * a);
        printf("The root of the equation is: %.2f\n", root);
    } else {
        
        printf("The equation has no real roots\n");
    }

    return 0;
}
