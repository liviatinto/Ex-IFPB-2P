//Escreva um programa que leia um n�mero e apresenta o quadrado desse n�mero.

#include <stdio.h>
#include <conio.h>
#include <math.h>

int main(void) {

    double n;

    printf("Digite o numero: ");
    scanf("%lf", &n);

    printf("\nValor de %.1lf ao quadrado: %.1lf", n, pow(n, 2));
    return 0;
}
