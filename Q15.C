#include <stdio.h>

int main(void) {
    
    int number, reverse = 0;

    
    printf("Enter a number: ");
    scanf("%d", &number);

    
    int temp = number;
    while (temp > 0) {
        int digit = temp % 10;
        reverse = reverse * 10 + digit;
        temp /= 10;
    }

   
    if (number == reverse) {
        printf("The number %d is a palindrome.\n", number);
    } else {
        printf("The number %d is not a palindrome.\n", number);
    }

    return 0;
}
