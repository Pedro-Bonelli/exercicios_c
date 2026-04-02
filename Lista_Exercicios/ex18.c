//  Escreva um programa para calcular e imprimir o número de lâmpadas necessárias para iluminar um determinado cômodo de uma residência. Dados de entrada: a potência da lâmpada utilizada (em watts), as dimensões (largura e comprimento, em metros) do cômodo. Considere que a potência necessária é de 18 watts por metro quadrado.

#include <stdio.h>

int main(){
    float pot_lamp, larg, comp, num_lamp;

    printf("Digite a potencia da lampada: ");
    scanf("%f", &pot_lamp);

    printf("Digite a largura do quarto: ");
    scanf("%f", &larg);

    printf("Digite o comprimento do quarto: ");
    scanf("%f", &comp);

    num_lamp = (((larg * comp) * 18) / pot_lamp);

    printf("O número de lampadas necessario é: %.0f", num_lamp);
}   