#include <stdio.h>
#include <stdlib.h>

int main()
{
    int primeiraVariavel =15;
    int segundaVariavel = 4;
    int resultado;


    resultado = segundaVariavel + primeiraVariavel + 1;
    printf("primeiraVariavel: %d\n",primeiraVariavel);
    printf("segundaVariavel: %d\n",segundaVariavel);
    printf("O resultado: %d\n",resultado);

    int entrada;
    printf("digite um valor de entrada:\n");
    scanf("%d", &entrada);
    entrada++;
    printf("voce digitou: %d\n", entrada);

    return 0;
}
