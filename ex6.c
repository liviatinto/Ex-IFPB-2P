//Escreva um programa que leia o sal�rio de um funcion�rio, calcule e mostre o seu
//novo sal�rio, com 10% de aumento.

#include <stdio.h>

int main(void) {
    double salario;

    printf("Digite seu salario: ");
    scanf("%lf", &salario);

    double aumento = salario * 10 / 100 + salario;

    printf("O valor do seu aumento em 10%% e %.2lf", aumento);

    return 0;

}
