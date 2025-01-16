#include <stdio.h>

int main(){
    int idade;
    float altura;
    char nome[20];
    float salario;
    char opcao;

    printf("Digite seu nome:");
    scanf("%s", &nome);
    printf("Digite sua idade:");
    scanf("%d", &idade);
    printf("Digite sua altura:");
    scanf("%f", &altura);
    printf("Digite seu salario:");
    scanf("%f", &salario);
    printf("Digite a opção:");
    scanf(" %c", &opcao); //espaço por conta do buffer de sistema

    printf("Nome: %s\n", nome);
    printf("Idade: %d anos\n", idade);
    printf("Altura: %f\n", altura);
    printf("Salário: %f\n", salario);
    printf("Opção: %c\n", opcao);
}