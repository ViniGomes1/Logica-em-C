#include <stdio.h>
#include <math.h>

/*
Objetivo:
Fa�a um programa que leia N n�meros reais e armazene-os em um vetor. Em seguida:
- Imprimir todos os elementos do vetor
- Mostrar na tela a soma e a m�dia dos elementos do vetor

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

    //repeti��o
    for (int i = 0; i < n; i++){
        printf("digite um numero: ");
        scanf("%lf", &vet[i]);
    }

    printf("\nValores\n");
    soma = 0;

    //repeti��o de mostrar valores
    for (int i = 0; i < n; i++){
            printf("%.2lf ", vet[i]);
    }

    //repeti��o para somar
    for (int i = 0; i < n; i++){
            soma = soma + vet[i];
    }

    media = soma / n;

    //saida de dados
    printf("\nSoma = %.2lf\n", soma);
    printf("media = %.2lf\n", media);

    return 0;
}


