#include <stdio.h>
#include <math.h>

/*
Objetivo:
Faça um programa que leia um número inteiro positivo N e depois N números inteiros
e armazene-os em um vetor. Em seguida, mostrar na tela todos os números negativos lidos.
*/

int main(){

    //variaveis
    int n;

    printf("Quantos numeros? ");
    scanf("%d", &n);

    //vetor
    int vet[n];

    //estrutura de repetição
    for (int i = 0; i < n; i++){
        printf("digite um numero: ");
        scanf("%d", &vet[i]);
    }

    printf("\nNegativos\n");
    // estrutura de repetição
    for (int i = 0; i < n; i++){
            if (vet[i] < 0){
                printf("%d\n", vet[i]);
            }

    }
    return 0;
}


