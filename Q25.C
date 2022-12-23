#include <stdio.h>

int main(void) {
    
    int rows;

    
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    
    for (int i = 0; i < rows; i++) {
       
        for (int j = 0; j < rows-i-1; j++) {
            printf(" ");
        }
        
        for (int j = 0; j <= i; j++) {
            printf("%d ",(i, j));
        }
        printf("\n");
    }

    return 0;
}


int binomialCoefficient(int n, int k) {
    int result = 1;
    if (k > n - k) {
        k = n - k;
    }
    for (int i = 0; i < k; i++) {
        result *= (n - i);
        result /= (i + 1);
    }
    return result;
}
