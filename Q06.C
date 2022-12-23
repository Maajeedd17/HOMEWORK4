#include <stdio.h>

int main(void) {
    
    int a, b;

    
    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);

    
    int lcm = a;
    while (lcm % b != 0) {
        lcm += a;
    }

    
    printf("The LCM of %d and %d is: %d\n", a, b, lcm);

    return 0;
}
