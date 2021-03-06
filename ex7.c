//Escreva um programa que leia o número de questões que um candidato acertou em
//uma prova, calcule e exiba o percentual de acertos. Considerando que a prova possuía
//50 questões.

#include <stdio.h>

int main(void) {
    double acertos;

    printf("Numero de acertos: ");
    scanf("%d", &acertos);

    double porcentage = acertos * 100 / 50;
    printf("Voce acertou %%%d", porcentage);

}
