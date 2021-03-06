//Escreva um programa que leia um número inteiro e apresente a metade deste
//número.

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(void) {
    setlocale(LC_ALL, "");
    int numero;
    double metade;

    printf("Digite um numero: \n");
    scanf("%d" , &numero);
    metade = numero / 2.0;
    printf("A metade do numero é %.1f", metade);
    return 0;
}
