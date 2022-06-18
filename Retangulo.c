#include <stdio.h>
#include <math.h>

/*
Objetivo:
Fazer um programa para ler as medidas da base e altura de um retângulo. Em seguida, mostrar o valor
da área, perímetro e diagonal deste retângulo, com quatro casas decimais.
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

    //Cálculo da área, perímetro e diagonal.
    area = base * altura;
    perimetro = 2 * (base + altura);
    diagonal = sqrt(pow(base, 2.0) + pow(altura, 2.0));

    //saida dos dados com 4 casas decimais
    printf("Area = %.4lf\n", area);
    printf("Perimetro = %.4lf\n", perimetro);
    printf("Diagonal = %.4lf\n", diagonal);

    return 0;
}
