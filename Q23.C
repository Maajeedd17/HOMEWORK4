#include <stdio.h>

int main(void) {
    
    int decimal;

    
    printf("Enter a decimal number: ");
    scanf("%d", &decimal);

    
    printf("Binary equivalent: ");
    while (decimal > 0) {
        printf("%d", decimal % 2);
        decimal /= 2;
    }
    printf("\n");

    return 0;
}
