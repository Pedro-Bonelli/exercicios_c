// O custo de um carro novo ao consumidor é a soma do custo de fábrica com a porcentagem do distribuidor e dos impostos (aplicados ao custo de fábrica). Supondo que o percentual do distribuidor seja de 28% e os impostos de 45%, escrever um algoritmo para ler o custo de fábrica de um carro, calcular e escrever o custo final ao consumidor. 

#include <stdio.h>

int main(){
    float custo_fabrica, custo_distribuidor, custo_imposto, custo_final;

    printf("Digite o custo de fábrica para produção do carro: ");
    scanf("%f", &custo_fabrica);

    custo_distribuidor = ((custo_fabrica * 28) / 100);
    custo_imposto = ((custo_fabrica * 45) / 100);

    custo_final = (custo_fabrica + custo_distribuidor + custo_imposto);
    printf("O preço final do carro será: %.2fR$", custo_final);
}