//Escreva um programa que leia um valor em real e apresente o mesmo em d�lar.
//Considerando que a cota��o de 1 d�lar = 5,44 R$.

#include <stdio.h>
int main(void) {
    float dolar = 5.44f;
    int n;

    printf("Digite o valor em real: ");
    scanf("%d", &n);
    printf("O valor em dolar e: %.2f", n / dolar);
    return 0;
}
