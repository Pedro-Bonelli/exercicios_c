//  Escreva um programa para ler o número de lados de um polígono regular e a medida do lado (em cm). Calcular e imprimir o seguinte:   - Se o número de lados for igual a 3 escrever TRIÂNGULO e o valor do seu perímetro.   - Se o número de lados for igual a 4 escrever QUADRADO e o valor da sua área.   - Se o número de lados for igual a 5 escrever PENTÁGONO

#include <stdio.h>

int main(){
    float n_lados, t1, t2, t3, lado;
    float tri_peri, area;

    printf("Digite o numero de lados do polígono: ");
    scanf("%f", &n_lados);

    if (n_lados == 3)
    {
      printf("Digite o valor do lado 1:");
      scanf("%f", &t1);
      
      printf("Digite o valor do lado 2:");
      scanf("%f", &t2);

      printf("Digite o valor do lado 3:");
      scanf("%f", &t3);

      tri_peri = (t1 + t2 + t3);

      printf("Triangulo, perimetro: %f", tri_peri);

    }

    else 
    {
        if (n_lados == 4)
        {
            printf("Digite o valor do lado: ");
            scanf("%f", &lado);

            area = (lado * lado);

            printf("Quadrado, area: %f", area);
        }

        else {
            printf("Pentagono");
        }
    }


}