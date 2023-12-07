#include <stdio.h>

int main(){

    int A[6] = {1, 0, 5, -2, -5, 7};

   /* A[0] = 1;
    A[1] = 0;
    A[2] = 5;
    A[3] = -2;
    A[4] = -5;
    A[5] = 7; */
    
    int somaDosValores = (A[0] + A[1] + A[5]);

    // somaDosValores = A[0] + A[1] + A[5];

    printf("\n%d", somaDosValores);

    printf("\nANTES: %d", A[4]);
    
    A[4] = 100;

    printf("\nDEPOIS: %d\n", A[4]);
    
    /*printf("\n%d", A[0]);
    printf("\n%d", A[1]);
    printf("\n%d", A[2]);
    printf("\n%d", A[3]);
    printf("\n%d", A[4]);
    printf("\n%d", A[5]);*/

    for(int i = 0; i < 6; i++){
        printf("\n%d", A[i]);
    }

    return 0;
}