//  Ler dois valores e imprimir uma das três mensagens a seguir: “Números iguais”, caso os números sejam iguais  "Primeiro é maior”, caso o primeiro seja maior que o segundo, “Segundo maior”, caso o segundo seja maior que o primeiro

#include <stdio.h>

int main(){
    int n1, n2;

    printf("Digite n1: ");
    scanf("%i", &n1);

    printf("Digite n2: ");
    scanf("%i", &n2);

    if (n1 == n2)
        printf("Números Iguais");
    else
        if (n1 > n2)
            printf("Primeiro é maior");
        else
            printf("Segundo é maior");
}