//Escreva um programa que leia o n�mero de quest�es que um candidato acertou em
//uma prova, calcule e exiba o percentual de acertos. Considerando que a prova possu�a
//50 quest�es.

#include <stdio.h>

int main(void) {
    double acertos;

    printf("Numero de acertos: ");
    scanf("%d", &acertos);

    double porcentage = acertos * 100 / 50;
    printf("Voce acertou %%%d", porcentage);

}
