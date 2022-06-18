#include <stdio.h>
#include <math.h>

/*
Objetivo:
Fazer um programa para ler os três coeficientes de uma equação do segundo grau. Usando a fórmula
de Baskara, calcular e mostrar os valores das raízes x1 e x2 da equação com quatro casas decimais.
Se a equação não possuir raízes reais, mostrar uma mensagem.

Obs:
A condição para a equação não ser real, é, o coeficiente 'a' ou delta serem iguais a 0.

*/

int main(){

    //variaveis
    double a, b, c, delta, x1, x2;

    //entrada de dados
    printf("Coeficiente a: ");
    scanf("%lf", &a);
    printf("Coeficiente b: ");
    scanf("%lf", &b);
    printf("Coeficiente c: ");
    scanf("%lf", &c);

    //cálculo delta
    delta = b * b - 4 * a * c;

    //condição
    if (a == 0 || delta < 0){

        printf("Não possui raizes reais");
    }
    else{

        //cálculo x1 e x2
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);

        //saida de dados
        printf("x1 = %.4lf\n", x1);
        printf("x2 = %.4lf\n", x2);
}

    return 0;
}
