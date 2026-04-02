// Uma revendedora de carros usados paga a seus funcionários vendedores um salário fixo por mês, mais uma comissão também fixa para cada carro vendido e mais 5% do valor das vendas por ele efetuadas. Escrever um algoritmo que leia o número de carros por ele vendidos, o valor total de suas vendas, o salário fixo e o valor que ele recebe por carro vendido. Calcule e escreva o salário final do vendedor.

#include <stdio.h>

int main(){
    float salario_fixo, comissao, numero_vendas, valor_vendas, salario_final;

    printf("Digite o valor de seu salário fixo: ");
    scanf("%f", &salario_fixo);

    printf("Digite o valor da comissão fixa: ");
    scanf("%f", &comissao);

    printf("Digite o numero de vendas no mes: ");
    scanf("%f", &numero_vendas);

    printf("Digite o valor de suas vendas no mes: ");
    scanf("%f", &valor_vendas);

    valor_vendas = ((valor_vendas / 100) * 5);

    salario_final = (salario_fixo + (comissao * numero_vendas) + valor_vendas);
    printf("O salário no final do mes foi de: %.2fR$", salario_final);
}