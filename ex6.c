//Escreva um programa que leia o salário de um funcionário, calcule e mostre o seu
//novo salário, com 10% de aumento.

#include <stdio.h>

int main(void) {
    double salario;

    printf("Digite seu salario: ");
    scanf("%lf", &salario);

    double aumento = salario * 10 / 100 + salario;

    printf("O valor do seu aumento em 10%% e %.2lf", aumento);

    return 0;

}
