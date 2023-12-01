#include <stdio.h>

int main(){
    printf("Vetores!\n");    
    char cores[4];

    cores[0] = 'A';
    cores[1] = 'B';
    cores[2] ='C';
    cores[3] ='D';

    printf("O valor da posicao 0 he: %c\n", cores[0]);


    do {
        printf("do while\n");
    } while( 0 == 1);

    while( 0 == 1){
        printf("while \n");
    }

    for(int i = 0; i <= 2; i++){
        printf("O valor do i he %d\n ", i);
    }

    // for que percore meu vetor de cores;
    for(int i = 0; i < 4 ; i++){
        printf("O valor da cor da posicao %d he %c \n", i,  cores[i]);
    }

    int index;
    char alunos[index];


    alunos[0] = 'a';
    alunos[1] = 'b';
    alunos[2] = 'c';

    printf("Valor de alunos poscao 0 he: %d\n", index);
    printf("Valor de alunos poscao 0 he: %c\n", alunos[0]);
    printf("Valor de alunos poscao 1 he: %c\n", alunos[1]);
    printf("Valor de alunos poscao 1 he: %c\n", alunos[2]);

    return 0;
}