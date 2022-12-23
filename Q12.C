#include <stdio.h>

int main(void) {
    
    int n;

    
    printf("Enter the upper limit: ");
    scanf("%d", &n);

    
    for (int i = 1; i <= n; i++) {
        
        int sum = 0;
        for (int j = 1; j < i; j++) {
            if (i % j == 0) {
                sum += j;
            }
        }

        
        if (i == sum) {
            printf("%d\n", i);
        }
    }

    return 0;
}
