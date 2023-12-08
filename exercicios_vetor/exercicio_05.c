#include <stdio.h>

int main(){

    int vetor[5];
    int vlrMaior;
    int vlrMenor;
    int pMaior;
    int pMenor;

    for(int i=0; i < 5; i++){
        printf("\nDigite o valor da posicao %d: ",i);
        scanf("%d", &vetor[i]);
    }

    pMaior = vetor[0];
    pMenor = vetor[0];

    for(int i=0; i < 5; i++){

        if(vetor[i] > vlrMaior){
            vlrMaior = vetor[i];
            pMaior = i;
        }

        if(vetor[i] < vlrMenor){
            vlrMenor = vetor[i];
            pMenor = i;
        }

        printf("\n%d", vetor[i]);
    }

    printf("\n A posicao do vetor maior he: %d", pMaior);
    printf("\n A posicao do vetor menor he: %d", pMenor);



    return 0;
}