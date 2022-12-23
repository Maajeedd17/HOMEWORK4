#include <stdio.h>
#include <math.h>

int main(void) {
    
    long long binary;

    
    printf("Enter a binary number: ");
    scanf("%lld", &binary);

    
    int decimal = 0;
    int i = 0;
    while (binary > 0) {
        int digit = binary % 10;
        decimal += digit * pow(2, i);
        binary /= 10;
        i++;
    }

    
    printf("Decimal equivalent: %d\n", decimal);

    return 0;
}
