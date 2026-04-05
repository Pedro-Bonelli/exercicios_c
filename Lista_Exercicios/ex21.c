//  A equipe Red Bull Racing de Fórmula 1 deseja calcular o número mínimo de litros que deverá colocar no tanque de seu carro para que ele possa percorrer um determinado número de voltas até o primeiro reabastecimento. Escreva um programa que leia o comprimento da pista (em metros), o número total de voltas a serem percorridas no grande prêmio, o número de reabastecimentos desejados e o consumo de combustível do carro (em Km/L). Calcular e escrever o número mínimo de litros necessários para percorrer até o primeiro reabastecimento. Observação: Considere que o número de voltas entre os reabastecimentos é o mesmo.

#include <stdio.h> 

int main(){
    float comp_pista, n_voltas, n_reab, consumo;
    float litros_tot, comb_min, dist_total_km;

    printf("Digite o comprimento da pista, em metros: ");
    scanf("%f", &comp_pista);

    printf("Digite o número de voltas do grande premio: ");
    scanf("%f", &n_voltas);

    printf("Digite o consumo do carro, em Km/l: ");
    scanf("%f", &consumo);

    printf("Digite o numero de reabastecimentos desejados: ");
    scanf("%f", &n_reab);

    dist_total_km = (comp_pista / 1000) * n_voltas;

    litros_tot = dist_total_km / consumo;
    
    comb_min = litros_tot / (n_reab + 1);

    printf("\nDistancia total: %.2f Km", dist_total_km);
    printf("\nLitros ate o primeiro reabastecimento: %.2f Litros\n", comb_min);
}