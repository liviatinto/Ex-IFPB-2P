//Escreva um programa que leia dois valores inteiros A e B, realizar a troca dos valores e
//imprimir o resultado após a troca.

#include <stdio.h>

int main(void) {

    int n1, n2, n3;

    printf("Digite um numero: ");
    scanf("%d", &n1);

    printf("Digite um numero: ");
    scanf("%d", &n2);

    n3 = n1;
    n1 = n2;
    n2 = n3;

    n3 = 0;

    printf("O valor de n1: %d e n2: %d", n1, n2);

    return 0;
}
