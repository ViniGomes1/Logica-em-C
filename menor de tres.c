#include <stdio.h>
#include <math.h>

/*
Objetivo:
Fazer um programa para ler tr�s n�meros inteiros. Em seguida, mostrar qual o menor dentre os tr�s
n�meros lidos. Em caso de empate, mostrar apenas uma vez.
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

    //condi��o
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
