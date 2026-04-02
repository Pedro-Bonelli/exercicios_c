// Escreva um algoritmo para ler uma temperatura em graus Fahrenheit, calcular e escrever o valor correspondente em graus Celsius

#include <stdio.h>

int main(){
    float temperatura, celsius;

    printf("Digite a temperatura, em Fahrenheit: ");
    scanf("%f", &temperatura);

    celsius = (((temperatura - 32) * 5) / 9);
    printf("%.2f graus Fahrenheit em graus Celsius é: %.2f", temperatura, celsius);
}