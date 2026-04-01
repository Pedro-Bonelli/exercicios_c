// Faça um algoritmo que calcule a área de um quadrado (lado*lado), em seguida mostre o dobro desta área para o usuário. 

#include <stdio.h> 

int main(){
    float lado, area, dobro;

    printf("Digite o valor que corresponde ao lado do quadrado, em metros: ");
    scanf("%f", &lado);

    area = (lado * lado);
    dobro = (area * 2);

    printf("O dobro da area do quadrado de lado %.2f m, e: %.2f", lado, dobro);
}