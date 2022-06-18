#include <stdio.h>
#include <math.h>

/*
Objetivo:
Leia uma quantidade indeterminada de duplas de valores inteiros X e Y. Escreva para cada X e Y uma
mensagem que indique se estes valores foram digitados em ordem crescente ou decrescente. O
programa deve finalizar quando forem digitados dois valores iguais.
*/

int main()
{
    //variaveis
    int x, y;

    //entrada de dados
    printf("Digite dois numeros: \n");
    scanf("%d", &x);
    scanf("%d", &y);

    //estrutura de repetição e saida de dados
    while (x != y)
    {
        if (x < y)
        {
            printf("Crescente\n");
        }
        else
        {
            printf("Decrescente\n");
        }

        printf("Digite outros dois numeros: \n");
        scanf("%d", &x);
        scanf("%d", &y);

    }



    return 0;
}
