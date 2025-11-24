/******************************************************************************
exercicio - 2
Faça um programa em C que dados dois valores quaisquer, reais, informados pelo usuário, apresente a média destes números.

Usar pelo menos 2 variáveis.
Apresentar o resultado com 1 casa decimal.
Exemplo de saída: "A média entre <numA> e <numB> é <média>.

******************************************************************************/
#include <stdio.h>

int main() {
    float numA, numB, media;
    
    printf("Digite o primeiro numero: ");
    scanf("%f", &numA);
    
    printf("Digite o segundo numero: ");
    scanf("%f", &numB);
   
    media = (numA + numB) / 2;
    
    printf("%.1f + %.1f / 2 = %.1f\n", numA, numB, media);
    
    return 0;
}
