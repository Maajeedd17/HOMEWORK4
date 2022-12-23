#include <stdio.h>

int main(void) {
    
    int number, sum = 0;

    
    printf("Enter a number: ");
    scanf("%d", &number);

    
    int temp = number;
    while (temp > 0) {
        int digit = temp % 10;
        int factorial = 1;
        for (int i = 2; i <= digit; i++) {
            factorial *= i;
        }
        sum += factorial;
        temp /= 10;
    }

    
    if (number == sum) {
        printf("The number %d is a strong number.\n", number);
    } else {
        printf("The number %d is not a strong number.\n", number);
    }

    return 0;
}
