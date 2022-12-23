#include <stdio.h>
#include <stdbool.h>

int main(void) {

    int n;

    
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
            printf("%d\n", i);
        }
    }

    return 0;
}
