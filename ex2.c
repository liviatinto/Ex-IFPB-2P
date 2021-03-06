//Escreva um programa que leia um número inteiro e apresente a metade deste
//número.

#include <stdio.h>

int main(void) {

    double n1, n2, n3;
    double soma;

    printf("Digite um numero: ");
    scanf("%lf", &n1);

    printf("\nDigite um numero: ");
    scanf("%lf", &n2);

    printf("\nDigite um numero: ");
    scanf("%lf", &n3);

    soma = n1+ n2+ n3;

    printf("\nO resultado da soma é: %.1lf\n", soma);

}
