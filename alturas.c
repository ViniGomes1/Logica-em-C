#include <stdio.h>
#include <math.h>

/*
Objetivo:
Fazer um programa para ler nome, idade e altura de N pessoas. Depois, mostrar na
tela a altura média das pessoas, e mostrar também a porcentagem de pessoas com menos de 16 anos,
bem como os nomes dessas pessoas caso houver.

*/

int main()
{

    //Variaveis
    int n, id;
    double media, soma, soma2, por;

    printf("Quantos numeros? ");
    scanf("%d", &n);

    //vetores
    double vet1[n];
    char vet2[n][50];
    int vet3[n];

    soma = 0;

    //estrutura de repeticão
    for (int i = 0; i < n; i++)
    {
        printf("dados da %d pessoa: \n", i+1);
        printf("Nome: ");
        fseek(stdin, 0, SEEK_END);
        scanf("%s", &vet2[i]);
        printf("Idade: ");
        fseek(stdin, 0, SEEK_END);
        scanf("%d", &vet3[i]);
        printf("Altura: ");
        fseek(stdin, 0, SEEK_END);
        scanf("%lf", &vet1[i]);
        soma = soma + vet1[i];
    }

    // saida de dados media de altura
    media = soma / n;
    printf("\nMedia = %.2lf\n", media);

    soma2 = 0;
    //estrutura menor que 16
    for (int i = 0; i < n; i++)
    {
        if (vet3[i] < 16)
        {
            soma2 = soma2 + 1;
        }
    }

    //porncentagem menores de 16
    por = soma2 * 100 / n;
    printf("Porcentagem dos menores de 16 anos: %.2lf\n", por);


    //saida de dado nome dos menores de 16
    for (int i = 0; i < n; i++)
    {
        if (vet3[i] < 16)
        {
            printf("\n%s\n", vet2[i]);
        }
    }

    return 0;
}


