// Escreva um programa que leia as notas das duas avaliações normais e a nota da avaliação optativa. Caso o aluno não tenha feito a optativa deve ser fornecido o valor  –1. Calcular a média do semestre considerando que a prova optativa substitui a nota mais baixa entre as duas primeiras avaliações. Escrever a média e mensagens que indiquem se o aluno foi aprovado, reprovado ou está em exame, de acordo com as informações abaixo: Aprovado : media >= 6.0, Reprovado: media < 3.0 e Exame     : media >= 3.0  e  < 6.0

#include <stdio.h>

int main()
{
    float n1, n2, opt, media;

    printf("Digite a nota 1: ");
    scanf("%f", &n1);

    printf("Digite a nota 2: ");
    scanf("%f", &n2);

    printf("Digite a nota da optativa: ");
    scanf("%f", &opt);

    if (opt == -1 || (opt <= n1 && opt <= n2))
    {
        media = (n1 + n2) / 2;
        printf("A media foi: %.1f", media);
    }
    else
    {
        if (opt > n1)
        {
            media = (opt + n2) / 2;
            printf("A media foi: %1.f", media);
        }
        else
        {
            if (opt > n2)
            {
                media = (n1 + opt) / 2;
                printf("A media foi: %.2f", media);
            }
        }
    }

    if (media >= 6.0)
        printf("\nAprovado.");
    
    if (media > 3.0 && media < 6.0)
        printf("\nExame.");

    if (media < 3.0)
        printf("\nReprovado.");
}
