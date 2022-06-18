#include <stdio.h>
#include <math.h>

/*
Objetivo:
Fazer um programa para ler as medidas da base e altura de um ret�ngulo. Em seguida, mostrar o valor
da �rea, per�metro e diagonal deste ret�ngulo, com quatro casas decimais.
*/

int main()
{
    //variaveis
    double base, altura, area, perimetro, diagonal;

    //Lendo as medidas bases
    printf("Base do retangulo: ");
    scanf("%lf", &base);

    printf("Altura do retangulo: ");
    scanf("%lf", &altura);

    //C�lculo da �rea, per�metro e diagonal.
    area = base * altura;
    perimetro = 2 * (base + altura);
    diagonal = sqrt(pow(base, 2.0) + pow(altura, 2.0));

    //saida dos dados com 4 casas decimais
    printf("Area = %.4lf\n", area);
    printf("Perimetro = %.4lf\n", perimetro);
    printf("Diagonal = %.4lf\n", diagonal);

    return 0;
}
