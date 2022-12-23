#include <stdio.h>

int main(void) {
    
    int number, sum = 0;

    
    printf("Enter a number: ");
    scanf("%d", &number);

   
    for (int i = 1; i < number; i++) {
        if (number % i == 0) {
            sum += i;
        }
    }

   
    if (number == sum) {
        printf("The number %d is a perfect number.\n", number);
    } else {
        printf("The number %d is not a perfect number.\n", number);
    }

    return 0;
}
