// Escreva um programa para ler dois valores inteiros e uma das seguintes operações a serem executadas (codificada da seguinte forma: 1.Adição, 2.Subtração, 3.Divisão, 4.Multiplicação). Calcular e escrever o resultado dessa operação sobre os dois valores lidos. Observação: Considere que só serão lidos os valores 1, 2, 3 ou 4. 

#include <stdio.h>

int main(){
    float n1, n2, cod;
    float soma, sub, div, mult;

    printf("Digite um numero inteiro: ");
    scanf("%f", &n1);

    printf("Digite outro numero inteiro: ");
    scanf("%f", &n2);

    printf("Conta a ser feita (1, 2, 3 , 4): ");
    scanf("%f", &cod);

    if (cod == 1)
    {
        soma = (n1 + n2);
        printf("A soma dos numeros e: %f", soma);
    }

    else {
        if (cod == 2)
        {
            sub = (n1 - n2);
            printf("A subtracao dos numeros e: %f", sub);
        }

        else {
            if (cod == 3)
            {
                div = (n1 / n2);
                printf("A divisao dos numeros e: %f", div);
            }

            else{
                if (cod == 4)
                {
                    mult = (n1 * n2);
                    printf("A multiplicacao dos numeros e: %f", mult);
                }
            }
            
        }
        
    }
    
}