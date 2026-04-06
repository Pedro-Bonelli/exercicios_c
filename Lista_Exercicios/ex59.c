// Escreva um programa que leia o valor de 3 ângulos de um triângulo e escreva se o triângulo é Acutângulo, Retângulo ou Obtusângulo. Sendo que:   - Triângulo Retângulo: possui um ângulo reto. (igual a 90º)   - Triângulo Obtusângulo: possui um ângulo obtuso. (maior que 90º)   - Triângulo Acutângulo: possui três ângulos agudos. (menor que 90º)

#include <stdio.h>

int main()
{
    float a, b, c;

    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);

    if (a == 90 || b == 90 || c == 90)
    {
        printf("Triangulo Retangulo");
    }
    else if (a > 90 || b > 90 || c > 90)
    {
        printf("Triangulo Obtusangulo");
    }
    else
    {
        printf("Triangulo Acutangulo");
    }
}