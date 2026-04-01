// Faça um algoritmo que converta metros para centímetros. Lembrando que 1m = 100cm.

#include <stdio.h>

int main(){
    float num, conversao;

    printf("Digite o valor que quer converter, em metros: ");
    scanf("%f", &num);

    conversao = (num * 100);
    printf("A conversao de %f metros em centimetros e: %.2f", num, conversao);

    return 1;
}