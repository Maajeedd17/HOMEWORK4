#include <stdio.h>
#include <math.h>

int main(void) {
    
    int n;

    
    printf("Enter the upper limit: ");
    scanf("%d", &n);

    
    for (int i = 1; i <= n; i++) {

        int sum = 0;
        int temp = i;
        while (temp > 0) {
            int digit = temp % 10;
            sum += pow(digit, 3);
            temp /= 10;
        }

        
        if (i == sum) {
            printf("%d\n", i);
        }
    }

    return 0;
}
