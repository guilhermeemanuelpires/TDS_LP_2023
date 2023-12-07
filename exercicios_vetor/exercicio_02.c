#include <stdio.h>

int main(){

    int vetorzao[8];

    // for(int i = 0; i< 8; i++){
    // }

    int i=0;
    while( i < 8){

        printf("\n Digite um valor da posicao %d: ", i);
        scanf("%d", &vetorzao[i]);
        i++;
    }

    int x, y;

    printf("\n Digite o Valor de X:");
    scanf("%d", &x);

    printf("\n Digite o Valor de Y:");
    scanf("%d", &y);
    
    // i=0;
    for(int i = 0; i< 8; i++){
        printf("\nO VALOR DA POSICAO %d HE : %d",i, vetorzao[i]);
    }

    // printf("\n %d - %d\n", x, y);

   int somaDosVetores = vetorzao[x] + vetorzao[y];

    printf("\n A soma da posicao %d e %d  he: %d\n",x, y, somaDosVetores);

    return 0;
}