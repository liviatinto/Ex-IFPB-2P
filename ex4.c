//Escreva um programa que leia um número e apresenta o valor do seu sucessor e
//antecessor.

#include <stdio.h>

int main(void) {

    int n;

    printf("Digite um numero inteiro: ");

    scanf("%d", &n);

    printf("\No sucessor de %d e %d e o antecessor e %d", n, n+1, n -1);

    return 0;
}
