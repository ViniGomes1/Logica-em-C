#include <stdio.h>
#include <math.h>

/*
Objetivo:
Fazer um programa para ler dois números inteiros M e N. Em seguida, ler uma matriz
de M linhas e N colunas contendo números reais. Gerar um vetor de modo que cada elemento do vetor
seja a soma dos elementos da linha correspondente da matriz. Mostrar o vetor gerado.
*/

int main()
{

    //variaveis
    int m, n, i, j, cont;

    //entrada de dados
    printf("Linhas da matriz: ");
    scanf("%d", &m);
    printf("Colunas da matriz: ");
    scanf("%d", &n);

    //matriz e vetor
    double mat[m][n];
    double vet[n];

    //estrutura de repetição entrada dos dados
    for (i = 0; i < m; i++){
            printf("Digite os elementos da %da linha: \n", i+1 );
        for (j = 0; j < n; j++){
            scanf("%lf", &mat[i][j]);
        }
    }

    //estrutura para gerar o vetor
    for (i = 0; i < m; i++){
            vet[i] = 0;
        for (j = 0; j < n; j++){
            vet[i] = vet[i] + mat[i][j];
        }
    }

    //saida de dados do vetor gerado
    printf("\nVetor gerado\n");

    for (i = 0; i < m; i++){
        printf("%.1lf\n", vet[i]);
    }

    return 0;
}
