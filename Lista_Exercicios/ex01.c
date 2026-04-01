// Escreva um algoritmo para ler um valor (do teclado) e escrever (na tela) o seu antecessor.

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int n1, ant;
    printf("Digite um número: ");
    scanf("%i", &n1);

    ant = (n1 - 1);
    printf("%i", ant);
}