#include <stdio.h>
#include <math.h>

/*
Objetivo:
Ler um número inteiro N, daí mostrar na tela a tabuada de N para 1 a 10.
*/

int main(){

    // variaveis
    int n, i, resultado;

    // entrada de dados
    printf("Qual tabuada? ");
    scanf("%d", &n);

    //Estrutura de repetição
    for (i=1; i <= 10; i++){
        resultado = n * i;
        printf("%d x %d = %d\n", n, i, resultado);
    }

    return 0;
}
