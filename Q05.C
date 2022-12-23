#include <stdio.h>

int main(void) {
    
    int result = 1;

  
    for (int i = 0; i < 4; i++) {
        result *= 2;
    }

   
    printf("The result is: %d\n", result);

    return 0;
}
