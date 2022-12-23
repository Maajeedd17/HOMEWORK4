#include <stdio.h>

int main(void) {
    
    int n;

    
    printf("Enter the upper limit: ");
    scanf("%d", &n);

   
    for (int i = 1; i <= n; i++) {
        
        int sum = 0;
        int temp = i;
        while (temp > 0) {
            int digit = temp % 10;
            int factorial = 1;
            for (int j = 2; j <= digit; j++) {
                factorial *= j;
            }
            sum += factorial;
            temp /= 10;
        }

        
        if (i == sum) {
            printf("%d\n", i);
        }
    }

    return 0;
}
