#include <stdio.h>

int main(void) {
    
    int rows;

    
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    
    int number = 1;
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d ", number);
            number++;
        }
        printf("\n");
    }

    return 0;
}
