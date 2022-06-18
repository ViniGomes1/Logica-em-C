#include <stdio.h>
#include <math.h>

/*
Objetivo:
Faça um programa para ler um número indeterminado de dados, contendo cada um, a idade de um
indivíduo. O último dado, que não entrará nos cálculos, contém um valor de idade negativa. Calcular
e imprimir a idade média deste grupo de indivíduos. Se for entrado um valor negativo na primeira vez,
mostrar a mensagem "IMPOSSIVEL CALCULAR"
*/
int main()
{

    //variaveis
    int idade, cont, soma;
    double media;

    //entrada de dados
    printf("Idades: ");
    scanf("%d", &idade);

    soma = 0;
    cont = 0;

    // estrutura de repetição
    while (idade >= 0)
    {
        soma = soma + idade;
        cont = cont + 1;
        scanf("%d", &idade);
    }

    //condição e saida de dados
    if (cont == 0)
    {
        printf("impossivel calcular: \n");
    }
    else
    {
        media = (double)soma / cont;
        printf("Media = %.2lf\n", media);
    }

    return 0;
}
