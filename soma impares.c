#include <stdio.h>
#include <math.h>

/*
Objetivo:
Leia 2 valores inteiros X e Y (em qualquer ordem). A seguir, calcule e mostre a soma dos números
impares entre eles.

*/
int main(){

    //variaveis
    int x, y, soma, troca;

    //Entrada de dados
    printf("Digite 2 numeros: \n");
    scanf("%d %d",&x,&y);

    //Troca
    /*
    Esta troca ocorre quando x é maior que y, pois o y não pode ser maior que x
    */
    if (x > y){
        troca = x;
        x = y;
        y = troca;
    }

    soma = 0;
    // estrutura de repetição
    for (int i = x+1; i < y; i++){
        if (i % 2 != 0){
            soma = soma + i;
        }
    }

    //saida de dados
    printf("Soma impares = %d", soma);

    return 0;
}

