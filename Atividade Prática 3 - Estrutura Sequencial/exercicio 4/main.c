/******************************************************************************
exercicio - 4
Faça um programa em C que informe quanto é um número qualquer, inteiro e 
informado pelo usuário, elevado a 2.

Usar pelo menos 1 variável.
Exemplo de saída: "O número <num> elevado a 2 é <resultado>".


*******************************************************************************/
#include <stdio.h>

 int main() {
    int num, resultado;
    
    //entrada de dados
    printf("Digite um número inteiro: ");
    scanf("%d", &num);
    
    //calculo do quadrado
    resultado = num * num;
    
    //saída formatada
    printf("O número %d elevado 2 = %d", num, resultado);
    
    return 0;
 }