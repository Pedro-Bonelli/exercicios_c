// Escreva um programa para ler as dimensões de uma cozinha retangular (comprimento, largura e altura), calcular e escrever a quantidade de caixas de azulejos para se colocar em todas as suas paredes (considere que não será descontada a área ocupada por portas e janelas). Cada caixa de azulejos possui 1.5 m2. 

#include <stdio.h>
#include <math.h>

int main(){
    float comp, larg, alt, area_paredes, num_caixas;
    char op = 's';

    while (op == 's')
    {
        printf("Digite o valor do comprimento da cozinha, em metros: ");
        scanf("%f", &comp);

        printf("Digite o valor do largura da cozinha, em metros: ");
        scanf("%f", &larg);

        printf("Digite o valor do altura da cozinha, em metros: ");
        scanf("%f", &alt);

        area_paredes = ((comp * alt) * 2) + ((larg * alt) * 2);
        num_caixas = ceilf((area_paredes / 1.5));    

        printf("O número de caixas necessárias e: %.1f\n", num_caixas);

        printf("Quer realizar um novo cálculo? (s/n): ");
        scanf(" %c", &op);
        while(op != 's' && op != 'n'){
            printf("\nInvalido.\nDigite novamente, s ou n: ");
            scanf(" %c", &op);
        }
    }
    
    
}