#include <stdio.h>
#include <math.h>

/*
Objetivo:
Fa�a um programa que leia um n�mero inteiro positivo N e depois N n�meros inteiros
e armazene-os em um vetor. Em seguida, mostrar na tela todos os n�meros negativos lidos.
*/

int main(){

    //variaveis
    int n;

    printf("Quantos numeros? ");
    scanf("%d", &n);

    //vetor
    int vet[n];

    //estrutura de repeti��o
    for (int i = 0; i < n; i++){
        printf("digite um numero: ");
        scanf("%d", &vet[i]);
    }

    printf("\nNegativos\n");
    // estrutura de repeti��o
    for (int i = 0; i < n; i++){
            if (vet[i] < 0){
                printf("%d\n", vet[i]);
            }

    }
    return 0;
}


