// Um motorista de táxi deseja calcular o rendimento de seu carro na praça. Sabendo-se que o preço do combustível é de R$ 2.90, escreva um programa para ler: a marcação do odômetro (Km) no início do dia, a marcação (Km) no final do dia, o número de litros de combustível gasto e o valor total (R$) recebido dos passageiros. Calcular e escrever: a média do consumo em Km/L e o lucro (líquido) do dia. 

#include <stdio.h>

int main(){
    float odometro_inicio, odometro_final, delta_km, combus_gasto, valor_recebido;
    float consumo, lucro;
    
    printf("Digite a kilometragem inicial do odometro: ");
    scanf("%f", &odometro_inicio);

    printf("Digite a kilometragem final do odometro: ");
    scanf("%f", &odometro_final);

    delta_km = (odometro_final - odometro_inicio);

    printf("\nVoce rodou %.2f km hoje.", delta_km);

    printf("\nDigite quantos litro de combustível foram gastos hoje: ");
    scanf("%f", &combus_gasto);

    printf("Digite o valor total recebido hoje: ");
    scanf("%f", &valor_recebido);

    consumo = (delta_km / combus_gasto);
    lucro = (valor_recebido - (combus_gasto * 2.90));

    printf("\nA media de consumo hoje foi: %.2f", consumo);
    printf("\nO lucro liquido hoje foi: %.2f", lucro);

}