#include <stdio.h>
#include <math.h>

/*
Objetivo:
Faça um programa que leia N números reais e armazene-os em um vetor. Em seguida:
- Imprimir todos os elementos do vetor
- Mostrar na tela a soma e a média dos elementos do vetor

*/
int main(){

    //variaveis
    int n;
    double media, soma;

    //entrada de dados
    printf("Quantos numeros? ");
    scanf("%d", &n);

    //vetor
    double vet[n];

    //repetição
    for (int i = 0; i < n; i++){
        printf("digite um numero: ");
        scanf("%lf", &vet[i]);
    }

    printf("\nValores\n");
    soma = 0;

    //repetição de mostrar valores
    for (int i = 0; i < n; i++){
            printf("%.2lf ", vet[i]);
    }

    //repetição para somar
    for (int i = 0; i < n; i++){
            soma = soma + vet[i];
    }

    media = soma / n;

    //saida de dados
    printf("\nSoma = %.2lf\n", soma);
    printf("media = %.2lf\n", media);

    return 0;
}


