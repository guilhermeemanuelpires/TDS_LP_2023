#include <stdio.h>

int main(){

    int resultado[11];
    int totalDaSoma=0;

    // for(int i = 0; i<=10; i++){
    //     resultado[i] = 0;
    // }

    // primeiro for é responsavel por criar o total de tabuadas 
    for(int i = 1; i <= 10; i++){

        resultado[i]=0;

        //segundo for é responsavel por crair as tabuadas individualmente
        for(int j = 1; j<=10; j++){
            // calcula total por tabuada
            resultado[i] = resultado[i] + (i*j);
            //calcula o tatal de todas as tabuadas;
            totalDaSoma = totalDaSoma + (i*j);
            printf("\n %d X %d = %d", i, j, i*j);
        }

        printf("\n - - RESULTADO TOTAL DA TABUADA %d: (%d) ", i, resultado[i]);
    }

    printf("\n O TOTAL DA SOMA DAS TABUADAS hE: %d \n", totalDaSoma);
    
    return 0;
}