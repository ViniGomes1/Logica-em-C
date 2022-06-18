#include <stdio.h>

/*
Objetivo:
Fazer um programa para ler o nome e idade de duas pessoas. Ao final mostrar uma mensagem com os
nomes e a idade média entre essas pessoas, com uma casa decimal.
*/
int main(){

    //variaveis
    char nome1[50], nome2[50];
    int idade1, idade2;
    double idademedia;

    // lendo nomes e idades
    printf("Dados da primeira pessoa \n");
    printf("nome: ");
    gets(nome1);
    printf("Idade: ");
    scanf("%d", &idade1);

    printf("Dados da Segunda pessoa \n");
    printf("nome: ");
    fseek(stdin, 0, SEEK_END);
    gets(nome2);
    printf("Idade: ");
    scanf("%d", &idade2);

    // cálculo da idade média
    idademedia = (idade1 + idade2) / 2.0;

    // saída de dados
    printf("a idade media de %s e %s eh de %.1lf anos \n",nome1, nome2, idademedia);

    return 0;
}
