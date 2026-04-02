// Faça um algoritmo que leia três notas de um aluno, calcule e escreva a média final deste aluno. Considerar que a média é ponderada e que o peso das notas é 2, 3 e 5.

#include <stdio.h> 

int main(){
    float n1, n2, n3, media_final;

    printf("Digite a nota da primeira avaliação: ");
    scanf("%f", &n1);

    printf("Digite a nota da segunda avaliação: ");
    scanf("%f", &n2);

    printf("Digite a nota da terceira avaliação: ");
    scanf("%f", &n3);

    media_final = (((n1 * 2 ) + (n2 * 3) + (n3 * 5)) / 10);

    printf("A media final do aluno foi: %.2f", media_final);
}