#include <stdio.h>
#include <stdbool.h>

int main(void) {
    
    int n, sum = 0;

    
    printf("Enter the upper limit: ");
    scanf("%d", &n);

    
    for (int i = 2; i <= n; i++) {
        bool is_prime = true;
        for (int j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                is_prime = false;
                break;
            }
        }
        if (is_prime) {
            sum += i;
        }
    }

    
    printf("The sum of all prime numbers between 1 and %d is: %d\n", n, sum);

    return 0;
}
