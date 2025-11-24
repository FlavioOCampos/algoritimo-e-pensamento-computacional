#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    char entrada[50];
    int num;


    printf("Digite um número inteiro (ou apenas Enter para gerar aleatório): ");
    fgets(entrada, sizeof(entrada), stdin);

    if (entrada[0] == '\n') {
      
        srand(time(NULL));
        num = rand() % 1000000000000000; 
        printf("Nenhum número digitado. Gerado aleatoriamente: %d\n", num);
    } else {
    
        num = atoi(entrada);
    }

    printf("Número: %d. Suce: %d. Antec: %d.\n", num, num + 1, num - 1);

    return 0;
}