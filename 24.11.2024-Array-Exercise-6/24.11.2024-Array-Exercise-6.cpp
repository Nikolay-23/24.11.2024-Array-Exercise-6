
#include <stdio.h>
int main() {
    int N;
    int A[100];
    int B[100];

    
   
    scanf_s("%d", &N);

    
    if (N <= 0 || N > 100) {
        printf("Error\n");
        return 1;
    }

   
   ;
    for (int i = 0; i < N; i++) {
        scanf_s("%d", &A[i]);
        B[i] = A[i]; 
    }

   
    for (int i = 0; i < N; i++) {
        A[i] = A[i] * i;
    }

    
    for (int i = 0; i < N; i++) {
        printf("%d ", B[i]);
    }
    printf("\n");

   
    
    for (int i = 0; i < N; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");

    return 0;
}

