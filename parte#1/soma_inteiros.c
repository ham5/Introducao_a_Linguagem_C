/*  somando dois números inteiros */
#include <stdio.h>

int main(){
    int num_1;
    int num_2;  
    int soma;
    
    printf("Digite o valor do primeiro inteiro:\n");
    scanf("%d", &num_1);
    
    printf("Digite o valor do segundo inteiro:\n");
    scanf("%d", &num_2);
    
    soma = num_1 + num_2;
    
    printf("O resultado da soma é %d\n", soma);

    return 0;
}
