#include <stdio.h>

int main()
{
    // Decalração de variaves!
    char valor1 = 'A';
    int valor2 = 1;
    float valor3 = 3.5; 
    double valor4 = 4.30000;
    char teste;

    //Apresentando dados!
    printf("valor1 %c\n", valor1);
    printf("valor2 %d\n", valor2);
    printf("valor3 %f\n", valor3);
    printf("valor4 %f\n", valor4);

    // Entrada de dados
    int valorDigitado;
    printf("Olá mundo, digite um valor do tipo int:\n");    
    scanf("%d", &valorDigitado);

    printf("O valor digitado he: %d\n", valorDigitado);
    printf("Teste %d\n", valorDigitado);

    return 0;
}