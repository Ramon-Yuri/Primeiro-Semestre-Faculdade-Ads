#include <stdio.h>

int main(){

    /*
    %d: Imprime um inteiro no formato decimal.
    %i: Equivalente a %d.
    %f: Imprime um número de ponto flutuante no formato padrão.
    %e: Imprime um número de ponto flutuante na notação científica.
    %c: Imprime um único caractere.
    %s: Imrprime uma cadeia (string) de caracteres.

    sintaxe printf("formatação", variável);
    */

    float altura = 1.80;
    char opcao = 'S';
    char nome[10] = "Ramon";
    int idade = 25;

    printf("Altura: %f\n", altura);
    printf("Opção: %c\n", opcao);
    printf("Nome: %s\nIdade: %d", nome, idade);
}