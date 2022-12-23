#include <stdio.h>
#include <math.h>

int main(void) {
    
    int number, sum = 0;

    
    printf("Enter a number: ");
    scanf("%d", &number);

    
    int temp = number;
    while (temp > 0) {
        int digit = temp % 10;
        sum += pow(digit, 3);
        temp /= 10;
    }

    
    if (number == sum) {
        printf("The number %d is an Armstrong number.\n", number);
    } else {
        printf("The number %d is not an Armstrong number.\n", number);
    }

    return 0;
}
