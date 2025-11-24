/************************************************************************************
exercicio - 3
Faça um programa em C que dado um número qualquer, inteiro, informado pelo usuário 
ou não, apresente seu sucessor e seu antecessor.

Usar pelo menos 1 variável.
Mostrar o número, seu sucessor e seu antecessor.
Exemplo de saída: "Número digitado <num>. Sucessor: <suce>. Antecessor: <antec>".
*************************************************************************************/
#include <stdio.h>

 int main() {
    int num;

    printf("Digite um número inteiro: ");
    scanf("%d", &num);

    printf("Número digitado: %d. Suce: %d. Antec: %d.\n", num, num + 1, num - 1);

    return 0;
}