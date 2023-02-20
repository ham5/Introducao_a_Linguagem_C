// programa que soma dois números inteiros
#include <stdio.h>

int main(){
    int num_1;  // variável que armazenará o primeiro inteiro 
    int num_2;  // variável que armazenará o segundo inteiro
    int soma;   // variável que armazenará a soma

    printf("Digite o valor do primeiro inteiro:\n");
    scanf("%d", &num_1);    // solicita o valor do primeiro inteiro e armazena em num_1
    
    printf("Digite o valor do segundo inteiro:\n");
    scanf("%d", &num_2);    // solicita o valor do segundo inteiro e armazena em num_2

    soma = num_1 + num_2;   // realiza a soma dos inteiros e armazena na variável "soma"

    printf("O resultado da soma é %d\n", soma);   // imprime o valor de "soma"

    return 0;
}