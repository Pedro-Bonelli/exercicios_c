//  Escreva um algoritmo para ler o número total de eleitores de um município, o número de votos brancos, nulos e válidos. Calcular e escrever o percentual que cada um representa em relação ao total de eleitores.

#include <stdio.h> 

int main(){
    float eleitores, brancos, nulos, validos;

    printf("Digite o numero total de eleitores do município: ");
    scanf("%f", &eleitores);

    printf("Digite o numero total de votos brancos do município: ");
    scanf("%f", &brancos);

    printf("Digite o numero total de nulos do município: ");
    scanf("%f", &nulos);

    printf("Digite o numero total de validos do município: ");
    scanf("%f", &validos);

    brancos = ((brancos * 100) / eleitores);

    nulos = ((nulos * 100) / eleitores);

    validos = ((validos * 100) / eleitores);

    printf("O percentual relativo de votos brancos, nulos e validos, em relacao ao numero de eleitores e, respectivamente: %.2f , %.2f, %.2f", brancos, nulos, validos);
}