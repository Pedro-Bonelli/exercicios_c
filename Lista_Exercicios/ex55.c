//  Acrescente as seguintes mensagens à solução do exercício anterior conforme o caso.   - Caso o número de lados seja inferior a 3 escrever NÃO E’ UM POLÍGONO.  - Caso o número de lados seja superior a 5 escrever POLÍGONO NÃO IDENTIFICADO.

#include <stdio.h>

int main(){
    float n_lados, t1, t2, t3, lado;
    float tri_peri, area;

    printf("Digite o numero de lados do polígono: ");
    scanf("%f", &n_lados);

    if(n_lados < 3)
    {
        printf("Nao e um poligono");
    }

    if (n_lados > 5) 
    {
        printf("Poligono nao identificado");
    }

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
            if ( n_lados == 5)
            {
                printf("Pentagono");
            }
            
        }
    }


}