#include<stdio.h>
main(){

    char nome[60];
    char matricula[10];
    char endereco[80]; 
    char curso[25]; 
    char disciplinas[50];
    int idade;

    printf("Campo de inscrição do estudante\n")

    printf("\nDigite o nome completo do estudante\n");
    scanf("%s", nome);
    printf("\nDigite a idade\n");
    scanf("%d", idade);
    printf("\nDigite a matrícula\n");
    scanf("%s", matricula);
    printf("\nDigite o endereço\n");
    scanf("%s", endereco);
    printf("\nDigite o curso selecionado\n");
    scanf("%s", curso);
    printf("\nDigite o período\n");
    scanf("%s", periodo);
    printf("\nDigite as disciplinas\n");
    scanf("%s", disciplinas);

    printf("\nO nome do estudante é %s", nome);
    printf("\nSua idade é %d", idade);
    printf("\nSua matrícula é %s", matricula);
    printf("\nSeu endereço é %s", endereco);
    printf("\nO curso inscrito é %s", curso);
    printf("\nSeu período é %s", periodo);
    printf("\nSuas disciplinas são %s", disciplinas);

}