#include <stdio.h>

int main(){
    int vetor[10];
    int totalDePares=0;

    for(int i=0; i< 10; i++){
        printf("\nDigite o valor da posicao %d :", i);
        scanf("%d", &vetor[i]);

        // if((vetor[i] %2) == 0 ){
        //     totalDePares++;
        // }
    }

    for(int i=0; i< 10; i++){

        if((vetor[i] %2) == 0 ){
            // totalDePares = totalDePares + 1
            totalDePares++;
        }

        // printf("\n%d", vetor[i]);
    }

    printf("\n O total de pares he: %d\n", totalDePares);
}