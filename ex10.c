//Escreva um programa que leia o curso que o aluno est� matriculado e mostre uma
//mensagem de boas-vindas para ele, no seguinte formato:
//O curso de Engenharia de Controle e Automa��o � um excelente curso.

#include <stdio.h>

int main() {

    char nome[255];

    printf("Digite seu nome: ");
    scanf("%s", &nome);

    printf("O curso de Engenharia de Controle e Automacao � um excelente curso, %s", nome);
    return 0;
}
