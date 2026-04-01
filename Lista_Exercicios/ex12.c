// ) Escreva um algoritmo para ler o salário mensal atual de um funcionário e o percentual de reajuste. Calcular e escrever o valor do novo salário. 

#include <stdio.h> 

int main(){
    float salario_mensal, reajuste, novo_salario;

    printf("Digite o valor de seu salario mensal: ");
    scanf("%f", &salario_mensal);

    printf("Digite o percentual de reajuste: ");
    scanf("%f", &reajuste);

    novo_salario = (((reajuste * salario_mensal) / 100) + salario_mensal);

    printf("O salário reajustado é: %.2f", novo_salario);
}