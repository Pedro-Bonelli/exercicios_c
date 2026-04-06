//  Escreva um programa para ler três valores e escrevê-los em ordem decrescente. Considere que o usuário não informará valores iguais.

#include <stdio.h>

int main() {
    float v1, v2, v3;

    printf("Digite um valor");
    scanf("%f", &v1);

    printf("Digite outro valor");
    scanf("%f", &v2);

    printf("Digite mais um valor");
    scanf("%f", &v3);

    if (v1 > v2 && v1 > v3) 
    {
        if (v2 > v3)
        {
            printf("%f, %f, %f", v1, v2, v3);
        } 
        else {
            printf("%f, %f, %f", v1, v3, v2);
        }
    } else if (v2 > v1 && v2 > v3) 
    {
        if (v1 > v3) {
            printf("%f, %f, %f", v2, v1, v3);
        } else {
            printf("%f, %f, %f", v2, v3, v1);
        }
    } else {
        if (v1 > v2) {
            printf("%f, %f, %f", v3, v1, v2);
        } else {
            printf("%f, %f, %f", v3, v2, v1);
        }
    }

}