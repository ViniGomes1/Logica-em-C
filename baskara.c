#include <stdio.h>
#include <math.h>

/*
Objetivo:
Fazer um programa para ler os tr�s coeficientes de uma equa��o do segundo grau. Usando a f�rmula
de Baskara, calcular e mostrar os valores das ra�zes x1 e x2 da equa��o com quatro casas decimais.
Se a equa��o n�o possuir ra�zes reais, mostrar uma mensagem.

Obs:
A condi��o para a equa��o n�o ser real, �, o coeficiente 'a' ou delta serem iguais a 0.

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

    //c�lculo delta
    delta = b * b - 4 * a * c;

    //condi��o
    if (a == 0 || delta < 0){

        printf("N�o possui raizes reais");
    }
    else{

        //c�lculo x1 e x2
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);

        //saida de dados
        printf("x1 = %.4lf\n", x1);
        printf("x2 = %.4lf\n", x2);
}

    return 0;
}
