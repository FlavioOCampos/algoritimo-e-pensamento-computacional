/******************************************************************************
exercicio - 1 
Faça um programa em C que dado dois valores quaisquer, inteiros, informados 
pelo usuário, apresente duas operações básicas de sua preferência.

Usar pelo menos 3 variáveis.
Apresentar o resultado mostrando os números digitados, o resultado 
além das operações.

Exemplo de saída: 13 + 5 = 18
******************************************************************************/

#include <stdio.h>

int main()
{
     int numA, numB;
     printf ("digite 1 numero: ");
     scanf("%i",&numA);
     printf ("digite 2 numero: ");
     scanf("%i",&numB);
     
     printf("%i - %i = %i",numA, numB, numA - numB);
     printf("%i / %i = %i",numA, numB, numA - numB);
     

return 0;
}
