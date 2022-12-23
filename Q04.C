#include <stdio.h>

int main(void) {
   
    int sum = 0;

    
    for (int i = 1; i <= 50; i++) {
        sum += i;
    }

    printf("The sum of the first 50 natural numbers is: %d\n", sum);

    return 0;
}
