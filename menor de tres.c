#include <stdio.h>
#include <math.h>

/*
Objetivo:
Fazer um programa para ler três números inteiros. Em seguida, mostrar qual o menor dentre os três
números lidos. Em caso de empate, mostrar apenas uma vez.
*/

int main(){

    //variaveis
    int a, b, c, menor;

    //entrada de dados
    printf("Primeiro valor: ");
    scanf("%d", &a);
    printf("Segundo valor: ");
    scanf("%d", &b);
    printf("Terceiro valor: ");
    scanf("%d", &c);

    //condição
    if (a < b && a < c){
        menor = a;
    }
    else if(b < c){
        menor = b;
    }
    else{
        menor = c;
    }

    //saida de dados
    printf("Menor = %d\n", menor);

    return 0;
}
