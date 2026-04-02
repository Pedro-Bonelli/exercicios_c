#include <stdio.h>

int main(){
    float media;

    printf("Digite a media: ");
    scanf("%f", &media);

    while(media < 0 || media > 10){
        printf("Valor invalido. Digite novamente \n");

        printf("Digite a media: ");
        scanf("%f", &media);
    }

    if(media >= 6.0){
        printf("Parabens, voce foi aprovado");
    }
    
    else{
        printf("Infelizmente, voce foi reprovado");
    }
}