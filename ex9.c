//Escreva um programa que leia uma temperatura em graus Célsius e apresente-a
//convertida em graus Fahrenheit. Considerando a fórmula: � = (9 ∗ � + 160)/5.

#include <stdio.h>

int main(void) {
    float n;
    printf("Digite o valor em celsius: ");
    scanf("%f", &n);
    printf("O valor em Fahrenheit e: %.1f", (9 * n + 180) / 5);
    return 0;
}
