#include <stdio.h>
#include <math.h>


/*
Objetivo:
Fazer um programa para ler um número inteiro N e uma matriz quadrada de ordem N
contendo números inteiros. Em seguida, mostrar a diagonal principal e a quantidade de valores
negativos da matriz.
*/
int main()
{

    //variaveis
    int n, i, j, cont;

    //entrada de dados
    printf("Ordem da matriz: ");
    scanf("%d", &n);

    //matriz
    int mat[n][n];

    //estrutura de repetição da matriz
    for (i = 0; i < n; i++){
        for (j = 0; j < n; j++){
            printf("Elemento [%d,%d]: ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }

    printf("\nDiagonal principal\n");

    //estrutura para diagonal principal
    for (i = 0; i < n; i++){
            printf("%d\n", mat[i][i]);  // a diagonal principal ocorre quando o numero 'i' tem o mesmo valor nas duas colunas da matriz quadrada
    }

    cont = 0;

    //estrutura para indentificar a quantidade de negativos
    for (i = 0; i < n; i++){
        for (j = 0; j < n; j++){
                if (mat[i][j] < 0){
                    cont = cont + 1;
                }
        }
    }

    //numero de negativos
    printf("Negativos: %d", cont);

    return 0;
}
