// Escreva um programa para ler o raio de um círculo, calcular e escrever a sua área.

#include <stdio.h>
#include <math.h>
#define PI 3.14159265359

int main(){
    float raio, area;

    printf("Digite o valor do raio da circunferência: ");
    scanf("%f", &raio);

    area = (PI * (raio * raio));

    printf("A área da circunferencia e: %.2f", area);
}