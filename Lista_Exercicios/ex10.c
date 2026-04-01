// Faça um algoritmo que pergunte quanto a pessoa ganha por hora (salário por hora) e o número de horas trabalhadas no mês. Calcule e mostre o total do seu salário no referido mês. 

#include <stdio.h> 

int main(){
    float sal_hora, horas_trabalho, salario_mensal;

    printf("Digite o valor de seu salário por hora trabalhada: ");
    scanf("%f", &sal_hora);

    printf("Digite o número de horas trabalhadas no mês: ");
    scanf("%f", &horas_trabalho);

    salario_mensal = (sal_hora * horas_trabalho);
    printf("O seu salário neste mês é: %.2f", salario_mensal);
}