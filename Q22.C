#include <stdio.h>

int main(void) {
    
    int count = 0;
    int sum = 0;

    
    for (int i = 100; i <= 200; i++) {
        if (i % 9 == 0) {
            count++;
            sum += i;
        }
    }

    
    printf("Number of integers: %d\n", count);
    printf("Sum of the integers: %d\n", sum);

    return 0;
}
