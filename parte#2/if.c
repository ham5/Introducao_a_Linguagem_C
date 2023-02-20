// programa que informa a relação entre dois inteiros
#include <stdio.h>

int main(){
    int num_1, num_2;

    printf("Informe dois inteiros abaixo:\n");
    scanf("%d %d", &num_1, &num_2);

    // se esta condição for verdadeira, a instrução que está dentro será executada
    if (num_1 == num_2){
        printf("%d é igual a %d\n", num_1, num_2);
    }
    // se esta condição for verdadeira, a instrução que está dentro será executada
    if (num_1 != num_2){
        printf("%d é diferente de %d\n", num_1, num_2);
    }
    // se esta condição for verdadeira, a instrução que está dentro será executada
    if (num_1 > num_2){
        printf("%d é maior que %d\n", num_1, num_2);
    }
    // se esta condição for verdadeira, a instrução que está dentro será executada
    if (num_1 >= num_2){
        printf("%d é maior ou igual a %d\n", num_1, num_2);
    }
    // se esta condição for verdadeira, a instrução que está dentro será executada
    if (num_1 < num_2){
        printf("%d é menor que %d\n", num_1, num_2);
    }
    // se esta condição for verdadeira, a instrução que está dentro será executada
    if (num_1 <= num_2){
        printf("%d é menor ou igual a %d\n", num_1, num_2);
    }

    return 0;    
}